<?php
/**
 * @file
 * minefield_site_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function minefield_site_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: flag like.
  $permissions['flag like'] = array(
    'name' => 'flag like',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: unflag like.
  $permissions['unflag like'] = array(
    'name' => 'unflag like',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
