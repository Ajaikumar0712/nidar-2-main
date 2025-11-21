import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ajaikumar/nidar-2/nidar_ws/install/mission_manager'
