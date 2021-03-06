<?php
/**
 * @file
 * proud_document_display.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function proud_document_display_defaultconfig_features() {
  return array(
    'proud_document_display' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function proud_document_display_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node document breadcrumbs'.
  $permissions['administer panelizer node document breadcrumbs'] = array(
    'name' => 'administer panelizer node document breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document content'.
  $permissions['administer panelizer node document content'] = array(
    'name' => 'administer panelizer node document content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document context'.
  $permissions['administer panelizer node document context'] = array(
    'name' => 'administer panelizer node document context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document defaults'.
  $permissions['administer panelizer node document defaults'] = array(
    'name' => 'administer panelizer node document defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document layout'.
  $permissions['administer panelizer node document layout'] = array(
    'name' => 'administer panelizer node document layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document overview'.
  $permissions['administer panelizer node document overview'] = array(
    'name' => 'administer panelizer node document overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document settings'.
  $permissions['administer panelizer node document settings'] = array(
    'name' => 'administer panelizer node document settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer pdf reader'.
  $permissions['administer pdf reader'] = array(
    'name' => 'administer pdf reader',
    'roles' => array(),
    'module' => 'pdf_reader',
  );

  return $permissions;
}
