<?php
/**
 * @file
 * Provides app info for Proud.
 */

/**
 * Implements hook_apps_app_info().
 */
function proud_document_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'proud_document_content',
    'post install callback' => 'proud_document_app_post_install',
  );
}


function proud_document_app_post_install($status) {
  module_enable('proud_document_display', 'proud_document_categories');
}
