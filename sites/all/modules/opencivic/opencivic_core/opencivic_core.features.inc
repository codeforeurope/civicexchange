<?php
/**
 * @file
 * opencivic_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
