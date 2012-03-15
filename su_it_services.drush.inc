<?php
// $Id$

/**
 * @file
 * Custom drush commands
 *
 */

/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function su_it_services_drush_command() {
  $items = array();

  $items['dt-enable'] = array(
    'description' => "Enable Department Themes.",
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['dt-disable'] = array(
    'description' => "Disable Department Themes.",
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['dt-status'] = array(
    'description' => "Show whether Department Themes are enabled or not",
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  return $items;
}

function drush_su_it_services_dt_enable() {
  variable_set('su_department_themes', 1);
  drush_log('Department Themes Enabled', 'ok');
}

function drush_su_it_services_dt_disable() {
  variable_set('su_department_themes', 0);
  drush_log('Department Themes Disabled', 'ok');
}

function drush_su_it_services_dt_status() {
  if (variable_get('su_department_themes', 0)) {
    drush_log('Department Themes are currently enabled', 'status');
  }
  else {
    drush_log('Department Themes are currently disabled.', 'status');
  }
}
