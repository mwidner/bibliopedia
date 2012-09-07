<?php
/**
 * @file
 * apache_solr_with_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function apache_solr_with_config_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
}
