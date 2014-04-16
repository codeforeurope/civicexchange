<?php
/**
 * @file
 * opencivic_home.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function opencivic_home_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'ec_homepage_banner';
  $layout->admin_title = 'EC Homepage banner';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 4,
          1 => 3,
          2 => 2,
          3 => 'main-row',
          4 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '33.11795523297799',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '33.07029803092796',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '33.81174673609405',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'col_1',
          1 => 'col_2',
          2 => 'col_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'col_1' => array(
        'type' => 'region',
        'title' => 'Col 1',
        'width' => '33.05045924093543',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_2' => array(
        'type' => 'region',
        'title' => 'Col 2',
        'width' => '33.07405779748252',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'col_3' => array(
        'type' => 'region',
        'title' => 'Col 3',
        'width' => '33.875482961582044',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'col_1_',
          1 => 'col_2_',
          2 => 'col_3_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'col_1_' => array(
        'type' => 'region',
        'title' => 'Col 1',
        'width' => '32.993197278911566',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'col_2_' => array(
        'type' => 'region',
        'title' => 'Col 2',
        'width' => '33.01667468334135',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'col_3_' => array(
        'type' => 'region',
        'title' => 'Col 3',
        'width' => '33.99012803774709',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['ec_homepage_banner'] = $layout;

  return $export;
}
