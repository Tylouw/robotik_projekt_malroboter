# Requests that grasp planning be performed for the target object
# returns a list of candidate grasps to be tested and executed

# the planning group used
string group_name

# the object to be grasped
CollisionObject target

# the names of the relevant support surfaces (e.g. tables) in the collision map
# can be left empty if no names are available
string[] support_surfaces

# an optional list of grasps to be evaluated by the planner
Grasp[] candidate_grasps

# an optional list of obstacles that we have semantic information about
# and that can be moved in the course of grasping
CollisionObject[] movable_obstacles

