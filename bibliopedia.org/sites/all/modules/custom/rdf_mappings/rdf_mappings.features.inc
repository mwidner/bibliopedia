<?php
/**
 * @file
 * rdf_mappings.features.inc
 */

/**
 * Implements hook_rdf_default_mappings().
 */
function rdf_mappings_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: person_page
  $rdf_mappings['node']['person_page'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
  );

  // Exported RDF mapping: author_page
  $rdf_mappings['node']['author_page'] = array(
    'rdftype' => array(
      0 => 'foaf:Person',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'foaf:familyName',
        1 => 'foaf:lastName',
      ),
      'type' => 'property',
      'datatype' => 'xsd:string',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_birth' => array(
      'type' => 'property',
      'datatype' => 'xsd:date',
      'predicates' => array(
        0 => 'foaf:birthday',
      ),
    ),
    'field_biography' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf',
      ),
    ),
    'field_homepage' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'foaf:homepage',
      ),
    ),
  );

  // Exported RDF mapping: journal
  $rdf_mappings['node']['journal'] = array(
    'rdftype' => array(
      0 => 'dc:BibliographicResource',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
      'datatype' => 'xsd:string',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_issn' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:identifier',
        1 => 'bibo:issn',
      ),
    ),
    'field_eissn' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:identifier',
        1 => 'bibo:eissn',
      ),
    ),
    'field_publisher' => array(
      'type' => 'property',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'dc:publisher',
        1 => 'bibo:distributor',
      ),
    ),
    'field_doi' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'bibo:doi',
        1 => 'dc:identifier',
      ),
    ),
    'field_haspart' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:hasPart',
      ),
    ),
    'field_article' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:hasPart',
      ),
    ),
  );

  // Exported RDF mapping: journal_article
  $rdf_mappings['node']['journal_article'] = array(
    'rdftype' => array(
      0 => 'bibo:AcademicArticle',
      1 => 'dc:BibliographicResource',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
      'datatype' => 'xsd:string',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_creator' => array(
      'type' => 'rel',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'foaf:lastName',
        1 => 'foaf:familyName',
      ),
    ),
    'field_subject' => array(
      'type' => 'rel',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'dc:subject',
      ),
    ),
    'field_publisher' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:publisher',
      ),
    ),
    'field_issued' => array(
      'type' => 'property',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'dc:issued',
      ),
    ),
    'field_ispartof' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:isPartOf',
      ),
    ),
    'field_bibliographiccitation' => array(
      'type' => 'property',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'dc:bibliographicCitation',
      ),
    ),
    'field_references' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:references',
      ),
    ),
    'field_doi' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:identifier',
      ),
    ),
    'field_startpage' => array(
      'type' => 'property',
      'datatype' => 'xsd:integer',
      'predicates' => array(
        0 => 'bibo:pageStart',
      ),
    ),
    'field_endpage' => array(
      'type' => 'property',
      'datatype' => 'xsd:integer',
      'predicates' => array(
        0 => 'bibo:pageEnd',
      ),
    ),
    'field_journal' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:isPartOf',
      ),
    ),
    'field_volume' => array(
      'type' => 'property',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'bibo:volume',
      ),
    ),
    'field_issue' => array(
      'type' => 'property',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'bibo:issue',
      ),
    ),
    'field_cites' => array(
      'type' => 'rel',
      'datatype' => 'xsd:string',
      'predicates' => array(
        0 => 'dc:references',
      ),
    ),
  );

  return $rdf_mappings;
}
