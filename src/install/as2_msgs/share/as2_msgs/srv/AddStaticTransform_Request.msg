# SERVICE TYPE: AddStaticTransform
# ------------------------------------------------------------------------------
# This service receives a transform to add it to the tf tree as static transform

string frame_id                      # Parent frame frame id
string child_frame_id                # Child frame id
geometry_msgs/Transform transform  # Transform
