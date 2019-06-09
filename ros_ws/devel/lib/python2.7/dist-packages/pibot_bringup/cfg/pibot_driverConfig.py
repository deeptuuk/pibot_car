## *********************************************************
##
## File autogenerated for the pibot_bringup package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 245, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 292, 'description': 'The diameter of the wheel', 'max': 500, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'wheel_diameter', 'edit_method': '', 'default': 30, 'level': 0, 'min': 10, 'type': 'int'}, {'srcline': 292, 'description': 'The track of the wheel', 'max': 1000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'wheel_track', 'edit_method': '', 'default': 300, 'level': 0, 'min': 50, 'type': 'int'}, {'srcline': 292, 'description': 'The resolution of the encoder', 'max': 10000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'encoder_resolution', 'edit_method': '', 'default': 1560, 'level': 0, 'min': 100, 'type': 'int'}, {'srcline': 292, 'description': 'The interval of do pid', 'max': 80, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'do_pid_interval', 'edit_method': '', 'default': 10, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 292, 'description': 'Kp value', 'max': 10000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'kp', 'edit_method': '', 'default': 20, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'Ki value', 'max': 32000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'ki', 'edit_method': '', 'default': 20, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'Kd value', 'max': 1000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'kd', 'edit_method': '', 'default': 20, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'Ko value', 'max': 1000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'ko', 'edit_method': '', 'default': 20, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'cmd_last_time value', 'max': 1000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'cmd_last_time', 'edit_method': '', 'default': 200, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'liner x', 'max': 200, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_v_liner_x', 'edit_method': '', 'default': 60, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'liner y', 'max': 200, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_v_liner_y', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'angular z', 'max': 200, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_v_angular_z', 'edit_method': '', 'default': 120, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 292, 'description': 'imu type(`E`(69) for enable', 'max': 255, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'imu_type', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

