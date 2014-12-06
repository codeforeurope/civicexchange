<?php
/**
 * @file
 * opencivic_highlight.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_highlight_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node oc_highlight defaults'.
  $permissions['administer panelizer node oc_highlight defaults'] = array(
    'name' => 'administer panelizer node oc_highlight defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create oc_highlight content'.
  $permissions['create oc_highlight content'] = array(
    'name' => 'create oc_highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_highlight content'.
  $permissions['delete any oc_highlight content'] = array(
    'name' => 'delete any oc_highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_highlight content'.
  $permissions['delete own oc_highlight content'] = array(
    'name' => 'delete own oc_highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_highlight content'.
  $permissions['edit any oc_highlight content'] = array(
    'name' => 'edit any oc_highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_highlight content'.
  $permissions['edit own oc_highlight content'] = array(
    'name' => 'edit own oc_highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
