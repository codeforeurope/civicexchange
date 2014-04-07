<?php
/**
 * @file
 * opencivic_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create oc_story content'.
  $permissions['create oc_story content'] = array(
    'name' => 'create oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_story content'.
  $permissions['delete any oc_story content'] = array(
    'name' => 'delete any oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_story content'.
  $permissions['delete own oc_story content'] = array(
    'name' => 'delete own oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_story content'.
  $permissions['edit any oc_story content'] = array(
    'name' => 'edit any oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_story content'.
  $permissions['edit own oc_story content'] = array(
    'name' => 'edit own oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
