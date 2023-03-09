from interfaces.srv import Picturetopoints

import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

import rclpy
from rclpy.node import Node
import rospy
from PIL import Image
import numpy as np
import potrace
import cv2


import sys
import getopt
import traceback

STEPS = 500
aperture_size = 3

BILATERAL_FILTER = False # Reduce number of lines with bilateral filter
USE_L2_GRADIENT = False # Creates less edges but is still accurate (leads to faster renders)

class PTPService(Node):

    def __init__(self):
        super().__init__('ptp_service')
        self.srv = self.create_service(Picturetopoints,'picture_to_points', self.picture_to_points_callback)

    def picture_to_points_callback(self, request, response):
        self.indexArray= []
        points = self.get_points(request.path)
        print(self.indexArray)
        pointsX =[]
        pointsY =[]
        for point in points:
            pointsX.append(point[0])
            pointsY.append(point[1])
        response.points.x = pointsX
        response.points.y = pointsY 
        response.points.curves =self.indexArray
        response.points.size = getImageSize(request.path)

        fig = plt.figure()
        ax = plt.axes(projection='3d')
        ax.scatter3D([x for x in pointsX], [y for y in pointsY ])
        plt.show()
        
        #self.get_logger().info('Incoming request\na: %d b: %d' % (request.path))

        return response


    def get_points(self, filename):
        points = []
        path = get_trace(get_contours(filename))
        newIndex = 0
        oldIndex = 0

        # für jede Kurve muss roboter nach oben und nicht mit stift weiter malen dann wieder nach unten bei nächster kurve
        for curve in path.curves:
            segments = curve.segments
            start = curve.start_point
            for segment in segments:
                x0,y0 = start
                if segment.is_corner:
                    newIndex +=2
                    x1, y1 = segment.c
                    x2, y2 = segment.end_point
                    for i in range(0,1,STEPS):
                        points.append((float((1-i)*x0 + i*x1),float((1-i)*y0 + i*y1 )))
                        
                    for j in range(0,1,STEPS):
                        points.append((float((1-j)*x1 + j*x2), float((1-j)*y1 + j*y2)))
                else:
                    newIndex +=1
                    x1,y1 = segment.c1
                    x2,y2 = segment.c2
                    x3,y3 = segment.end_point
                    for t in range(0,1,STEPS):
                        points.append((float(pow(1-t, 3)*x0 + 3*pow((1-t),2)*t*x1 + 3*(1-t)*pow(t,2)*x2+pow(t,3)*x3),float( pow(1-t, 3)*y0 + 3*pow((1-t),2)*t*y1 + 3*(1-t)*pow(t,2)*y2+pow(t,3)*y3)))
                start = segment.end_point
            self.indexArray.append(newIndex-oldIndex)
            oldIndex = newIndex
        
        return points

def main(args=None):
    rclpy.init(args=args)

    ptp_service = PTPService()

    rclpy.spin(ptp_service)

    rclpy.shutdown()

def get_contours(filename, nudge = .33):
    image = cv2.imread(filename)
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    if BILATERAL_FILTER:
        median = max(10, min(245, np.median(gray)))
        lower = int(max(0, (1 - nudge) * median))
        upper = int(min(255, (1 + nudge) * median))
        filtered = cv2.bilateralFilter(gray, 5, 50, 50)
        edged = cv2.Canny(filtered, lower, upper, L2gradient = USE_L2_GRADIENT)
    else:
        edged = cv2.Canny(gray, 100, 150, apertureSize = aperture_size)

    # plt.subplot(122),plt.imshow(edged,cmap = 'gray')
    # plt.title('Edge Image'), plt.xticks([]), plt.yticks([])
    # plt.show()
    return edged[::-1]


def get_trace(data):
    for i in range(len(data)):
        data[i][data[i] > 1] = 1
    bmp = potrace.Bitmap(data)
    path = bmp.trace(2, potrace.TURNPOLICY_MINORITY, 1.0, 1, .5)
    return path




def getImageSize(filename):
    image = cv2.imread(filename)
    return (image.shape[0], image.shape[1])

if __name__ == '__main__':
    main()

    