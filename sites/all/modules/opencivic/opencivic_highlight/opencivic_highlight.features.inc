<?php
/**
 * @file
 * opencivic_highlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_highlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opencivic_highlight_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function opencivic_highlight_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: oc_highlights
  $nodequeues['oc_highlights'] = array(
    'name' => 'oc_highlights',
    'title' => 'Highlights',
    'subqueue_title' => '',
    'size' => 2,
    'link' => 'Display as highlight on homepage',
    'link_remove' => 'Remove highlight from homepage',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'oc_highlight',
      1 => 'oc_story',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function opencivic_highlight_image_default_styles() {
  $styles = array();

  // Exported image style: opencivic_highlight.
  $styles['opencivic_highlight'] = array(
    'name' => 'opencivic_highlight',
    'label' => 'OpenCivic Highlight',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 730,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function opencivic_highlight_node_info() {
  $items = array(
    'oc_highlight' => array(
      'name' => t('Highlight'),
      'base' => 'node_content',
      'description' => t('Shows a large image and links to other content for highlighting on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
