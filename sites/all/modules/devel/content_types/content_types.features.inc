<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'author_page' => array(
      'name' => t('Author Page'),
      'base' => 'node_content',
      'description' => t('A page containing information about an author of a book, article, etc.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'journal' => array(
      'name' => t('Journal'),
      'base' => 'node_content',
      'description' => t('A journal that publishes articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'journal_article' => array(
      'name' => t('Journal Article'),
      'base' => 'node_content',
      'description' => t('An article from a journal. Not to be confused with Drupal\'s core "Article" type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person_page' => array(
      'name' => t('Person page'),
      'base' => 'node_content',
      'description' => t('A page about a person. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
