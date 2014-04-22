<?php
/**
 * @file
 * opencivic_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function opencivic_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Page/Participate';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'appcat_participate';
  $fe_block_boxes->body = '<p><a class="button" href="node/add/application">Add an App</a><br /><a class="button" href="node/add/organization">Add an Organization</a><br /><a class="button" href="node/add/article">Write a Story</a></p>';

  $export['appcat_participate'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'EC Add an app box';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ec_add_an_app_box';
  $fe_block_boxes->body = '<div class="welcome-box"><p class="welcome-msg"><b>Share an app</b></p><p class="welcome-msg-slogan">Developed an app that has had an impact on public services? Register and share your experience.</p><p class="welcome-button"><a href="/node/add/application">Share your app</a></p></div>';

  $export['ec_add_an_app_box'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'EC Find an app box';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ec_find_an_app_box';
  $fe_block_boxes->body = '<div class="welcome-box"><p class="welcome-msg"><b>Find an app</b></p><p class="welcome-msg-slogan">Working in local govt? Want to find examples of apps used elsewhere to improve public services?</p><p class="welcome-button"><a href="/apps">Browse apps</a></p></div>';

  $export['ec_find_an_app_box'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'EC Welcome box';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ec_welcome_box';
  $fe_block_boxes->body = '<div class="welcome-box welcome-main"><h1><span><span style="font-family: Calibri,sans-serif; font-size: small;"><span style="font-size: 11pt;">Welcome to<br/><strong>Civic Exchange</strong></h1>A platform for improving public services by showcasing and promoting the reuse of civic software.</span></span></span></h1></div>';

  $export['ec_welcome_box'] = $fe_block_boxes;

  return $export;
}
