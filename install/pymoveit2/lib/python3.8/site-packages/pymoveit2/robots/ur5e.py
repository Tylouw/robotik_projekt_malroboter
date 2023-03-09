from typing import List

MOVE_GROUP_ARM: str = "ur_manipulator"

def joint_names(prefix: str = "") -> List[str]:
    return [
        prefix+"shoulder_pan_joint",
        prefix+"shoulder_lift_joint",
        prefix+"elbow_joint",
        prefix+"wrist_1_joint",
        prefix+"wrist_2_joint",
        prefix+"wrist_3_joint"
    ]

def base_link_name(prefix: str = "") -> str:
    return prefix+"base"

def end_effector_name(prefix: str = "") -> str:
    return prefix+"tool0"

