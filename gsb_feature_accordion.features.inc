<?php
/**
 * @file
 * gsb_feature_accordion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_accordion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
