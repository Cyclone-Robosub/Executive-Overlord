import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zenyn/Executive-Overlord/src/install/pwm_cltool'
