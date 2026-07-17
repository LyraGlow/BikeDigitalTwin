import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lyraglow/Projects/BikeDigitalTwin/install/ros_tcp_endpoint'
