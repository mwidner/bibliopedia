<?php
/**
 * @file
 * The plugin to handle mini pager.
 *
 * @ingroup views_pager_plugins
 */

class sparql_views_plugin_pager_mini extends views_plugin_pager_mini {
  /**
   * Overrides views_plugin_pager_full::execute_count_query().
   *
   * This is done so that SPARQL Views can swap in its own COUNT handling. If
   * this is not a SPARQL View, then call the parent instead.
   */
  function execute_count_query(&$count_query) {
    if (get_class($this->view->query) !== 'sparql_views_plugin_query_sparql') {
      return parent::execute_count_query($count_query);
    }
    $sparql_result = sparql_request($count_query, $this->view->query->endpoint);
    if (empty($sparql_result) || empty($sparql_result['result']['rows'])) {
      vsm(t('No result returned. Please check your query and the endpoint status.'));
      return;
    }
    $row = reset($sparql_result['result']['rows']);
    $this->total_items = $row['pager_count'];
    if (!empty($this->options['offset'])) {
      $this->total_items -= $this->options['offset'];
    }

    $this->update_page_info();
    return $this->total_items;
  }
}
