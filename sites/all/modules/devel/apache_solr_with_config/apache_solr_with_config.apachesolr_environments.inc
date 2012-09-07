<?php
/**
 * @file
 * apache_solr_with_config.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function apache_solr_with_config_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'mandeville - Bibliopedia dev server';
  $environment->url = 'http://bibliopedia.org:8080/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'author_page',
      2 => 'biblio',
      3 => 'blog',
      4 => 'book',
      5 => 'feed',
      6 => 'feed_item',
      7 => 'forum',
      8 => 'image',
      9 => 'journal',
      10 => 'journal_article',
      11 => 'notes',
      12 => 'page',
      13 => 'panel',
      14 => 'person_page',
      15 => 'poll',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
