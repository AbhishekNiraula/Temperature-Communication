import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/abhiniraula/Documents/ROS2_PRACTICE/interfaces/install/temperature'
