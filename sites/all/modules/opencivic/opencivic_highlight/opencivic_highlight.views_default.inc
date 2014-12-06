<?php
/**
 * @file
 * opencivic_highlight.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_highlight_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opencivic_highlight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Highlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'sponsors' => 0,
    'oc_app_featured_apps' => 0,
    'oc_highlights' => 0,
  );
  /* Field: Content: Story to link to */
  $handler->display->display_options['fields']['field_oc_highlight_story']['id'] = 'field_oc_highlight_story';
  $handler->display->display_options['fields']['field_oc_highlight_story']['table'] = 'field_data_field_oc_highlight_story';
  $handler->display->display_options['fields']['field_oc_highlight_story']['field'] = 'field_oc_highlight_story';
  $handler->display->display_options['fields']['field_oc_highlight_story']['label'] = '';
  $handler->display->display_options['fields']['field_oc_highlight_story']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_highlight_story']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_highlight_story']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_oc_highlight_story']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_oc_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_oc_summary']['id'] = 'field_oc_summary';
  $handler->display->display_options['fields']['field_oc_summary']['table'] = 'field_data_field_oc_summary';
  $handler->display->display_options['fields']['field_oc_summary']['field'] = 'field_oc_summary';
  $handler->display->display_options['fields']['field_oc_summary']['label'] = '';
  $handler->display->display_options['fields']['field_oc_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oc_featured_image']['id'] = 'field_oc_featured_image';
  $handler->display->display_options['fields']['field_oc_featured_image']['table'] = 'field_data_field_oc_featured_image';
  $handler->display->display_options['fields']['field_oc_featured_image']['field'] = 'field_oc_featured_image';
  $handler->display->display_options['fields']['field_oc_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_oc_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_oc_featured_image']['alter']['path'] = 'node/[field_oc_highlight_story]';
  $handler->display->display_options['fields']['field_oc_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_featured_image']['settings'] = array(
    'image_style' => 'opencivic_highlight',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[field_oc_highlight_story]">
<div class="highlight-text">
<div class="highlight-title">[title]</div>
<div class="highlight-summary">[field_oc_summary]</div>
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_highlight' => 'oc_highlight',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Homepage highlights */
  $handler = $view->new_display('panel_pane', 'Homepage highlights', 'panel_pane_1');
  $export['opencivic_highlight'] = $view;

  return $export;
}
