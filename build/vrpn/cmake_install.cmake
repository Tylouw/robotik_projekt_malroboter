# Install script for directory: /home/prakt3/praktikum_ws/src/vrpn-release

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/prakt3/praktikum_ws/install/vrpn")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xserversdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/prakt3/praktikum_ws/build/vrpn/libvrpnserver.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xserversdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/prakt3/praktikum_ws/build/vrpn/vrpn_Configure.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog_Output.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Assert.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Auxiliary_Logger.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_BaseClass.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Button.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Connection.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ConnectionPtr.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Dial.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_EndpointContainer.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FileConnection.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FileController.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ForceDevice.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ForwarderController.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Forwarder.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FunctionGenerator.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Imager.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_LamportClock.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Log.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_MainloopContainer.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_MainloopObject.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Mutex.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_OwningPtr.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_RedundantTransmission.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_SendTextMessageStreamProxy.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Serial.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_SerialPort.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Shared.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_SharedObject.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Sound.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Text.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Thread.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Types.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_WindowsH.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_3DConnexion.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_3DMicroscribe.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_3Space.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_5DT16.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Adafruit.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ADBox.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog_5dt.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog_5dtUSB.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog_Radamec_SPI.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog_USDigital_A2.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Atmel.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_BiosciencesTools.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Button_NI_DIO24.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Button_USB.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_CerealBox.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_CHProducts_Controller_Raw.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Contour.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_DevInput.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_DirectXFFJoystick.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_DirectXRumblePad.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_DreamCheeky.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Dyna.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Event_Analog.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Event.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Event_Mouse.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Flock.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Flock_Parallel.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ForceDeviceServer.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Freespace.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FunctionGenerator.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Futaba.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_GlobalHapticsOrb.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Griffin.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_HashST.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_HumanInterface.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_IDEA.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Imager_Stream_Buffer.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ImmersionBox.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_inertiamouse.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_JoyFly.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Joylin.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Joywin32.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Keyboard.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Logitech_Controller_Raw.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Laputa.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_LUDL.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Magellan.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_MessageMacros.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Microsoft_Controller_Raw.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Mouse.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_NationalInstruments.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Nidaq.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_nikon_controls.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_nVidia_shield_controller.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Oculus.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_OmegaTemperature.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_OneEuroFilter.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_OzzMaker.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Poser_Analog.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Poser.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Poser_Tek4662.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_raw_sgibox.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Retrolink.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Saitek_Controller_Raw.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_sgibox.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Spaceball.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Streaming_Arduino.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tng3.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_3DMouse.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_AnalogFly.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_ButtonFly.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Crossbow.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_DTrack.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Fastrak.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Filter.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_GameTrak.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_GPS.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_IMU.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_isense.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Isotrak.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_JsonNet.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Liberty.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_MotionNode.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_NDI_Polaris.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_NovintFalcon.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_OSVRHackerDevKit.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_PDI.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_PhaseSpace.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_RazerHydra.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_ThalmicLabsMyo.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_SpacePoint.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Wintracker.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_Colibri.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_TrivisioColibri.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_WiimoteHead.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_zSight.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_ViewPoint.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_UNC_Joystick.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_VPJoystick.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Wanda.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_WiiMote.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_XInputGamepad.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Xkeys.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker_LibertyHS.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_YEI_3Space.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Zaber.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/server_src/vrpn_Generic_server_object.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrpn" TYPE FILE FILES "/home/prakt3/praktikum_ws/src/vrpn-release/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrpn/cmake" TYPE FILE RENAME "VRPNConfig.cmake" FILES "/home/prakt3/praktikum_ws/src/vrpn-release/cmake/FindVRPN.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/quatlib/cmake" TYPE FILE RENAME "quatlibConfig.cmake" FILES "/home/prakt3/praktikum_ws/src/vrpn-release/cmake/Findquatlib.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclientsdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/prakt3/praktikum_ws/build/vrpn/libvrpn.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclientsdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/prakt3/praktikum_ws/build/vrpn/vrpn_Configure.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Analog_Output.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Assert.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Auxiliary_Logger.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_BaseClass.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Button.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Connection.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ConnectionPtr.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Dial.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_EndpointContainer.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FileConnection.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FileController.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ForceDevice.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_ForwarderController.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Forwarder.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_FunctionGenerator.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Imager.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_LamportClock.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Log.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_MainloopContainer.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_MainloopObject.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Mutex.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_OwningPtr.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_RedundantTransmission.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_SendTextMessageStreamProxy.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Serial.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_SerialPort.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Shared.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_SharedObject.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Sound.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Text.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Thread.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Tracker.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_Types.h"
    "/home/prakt3/praktikum_ws/src/vrpn-release/vrpn_WindowsH.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/prakt3/praktikum_ws/build/vrpn/quat/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/submodules/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/atmellib/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/gpsnmealib/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/client_src/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/server_src/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/util/printStream/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/doxygen/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/python_vrpn/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/python/cmake_install.cmake")
  include("/home/prakt3/praktikum_ws/build/vrpn/java_vrpn/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/prakt3/praktikum_ws/build/vrpn/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
