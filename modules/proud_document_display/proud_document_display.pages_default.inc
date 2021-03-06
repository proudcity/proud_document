<?php
/**
 * @file
 * proud_document_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function proud_document_display_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'proud_documents';
  $page->task = 'page';
  $page->admin_title = 'Documents';
  $page->admin_description = '';
  $page->path = 'documents';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Documents',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_proud_documents__panel_context_214d17c7-b78b-4027-aa7a-745832e4a474';
  $handler->task = 'page';
  $handler->subtask = 'proud_documents';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'proud_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '225149d3-7a62-4d0e-afc8-974e097a0cbe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-247da01d-3e73-4a34-8ab1-e2d416c55294';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'documents-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '247da01d-3e73-4a34-8ab1-e2d416c55294';
  $display->content['new-247da01d-3e73-4a34-8ab1-e2d416c55294'] = $pane;
  $display->panels['contentmain'][0] = 'new-247da01d-3e73-4a34-8ab1-e2d416c55294';
  $pane = new stdClass();
  $pane->pid = 'new-9be05022-9f80-43a6-a715-be515c6d47bd';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-documents-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9be05022-9f80-43a6-a715-be515c6d47bd';
  $display->content['new-9be05022-9f80-43a6-a715-be515c6d47bd'] = $pane;
  $display->panels['sidebar'][0] = 'new-9be05022-9f80-43a6-a715-be515c6d47bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-247da01d-3e73-4a34-8ab1-e2d416c55294';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['proud_documents'] = $page;

  return $pages;

}
