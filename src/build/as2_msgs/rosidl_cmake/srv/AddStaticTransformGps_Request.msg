# SERVICE TYPE: AddStaticTransform
# ------------------------------------------------------------------------------
# This service receives a transform to add it to the tf tree as static transform

string frame_id                      # Parent frame frame id
string child_frame_id                # Child frame id
sensor_msgs/NavSatFix gps_position    # Transform
float32 azimuth                        # yaw
float32 elevation                      # pitch
float32 bank                           # roll
