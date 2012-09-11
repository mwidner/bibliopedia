<?php
/**
 * @file
 * sparql_queries.features.inc
 */

/**
 * Implements hook_default_sparql_views_type().
 */
function sparql_queries_default_sparql_views_type() {
  $items = array();
  $items['dbpedia'] = entity_import('sparql_views_resource_type', '{ "name" : "dbpedia", "label" : "DBPedia", "rdf_mapping" : [] }');
  $items['journal_lookup_via_linked_periodicals'] = entity_import('sparql_views_resource_type', '{
    "name" : "journal_lookup_via_linked_periodicals",
    "label" : "Journal Lookup via Linked Periodicals",
    "rdf_mapping" : []
  }');
  return $items;
}
