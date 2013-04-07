<?php
/**
 * @file
 * minefield_site_config.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function minefield_site_config_flag_default_flags() {
  $flags = array();
  // Exported flag: "Like".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Like',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove like',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'minefield_site_config',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
