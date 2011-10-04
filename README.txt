IT Services module for sites.stanford.edu

-- SUMMARY -- 

Authors: Marco Wise

This module implements a few functions to make maintenance of Stanford's Drupal
hosting environment (sites.stanford.edu) easier, including the ability to
themes restricted to official departments and groups by University Communications

* the module cannot be disabled using the UI
* stops users from updating their uploads and /tmp directory
* stops users from enabling official themes unless they are entitled to them
* implements drush commands for enabling/disabling official themes

For a full description of the module, visit the project page:
  https://github.com/SU-SWS/SU-IT-Services/
  
To submit bug reports and feature suggestions, or to track changes:
  https://github.com/SU-SWS/SU-IT-Services/issues

-- LICENSE --

See the LICENSE file.

-- REQUIREMENTS --

None.

-- INSTALLATION --

The module is installed and enabled by default on sites.stanford.edu.
For department installs, the profile needs to run the following:
  variable_set('su_department_themes', 1);

-- UPGRADE --

N/A

-- CONFIGURATION --

The module isn't configured through the UI, but through drush.
The following commands are available:

dt-enable 
dt-disable 
dt-status 

(dt stands for department themes) 

Allowing the enabling themes should be done for departments and
official groups as designated by University Communications.
