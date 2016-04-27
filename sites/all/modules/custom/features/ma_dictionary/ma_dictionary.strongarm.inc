<?php
/**
 * @file
 * ma_dictionary.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ma_dictionary_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dictionary_word';
  $strongarm->value = 0;
  $export['comment_anonymous_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dictionary_word';
  $strongarm->value = 1;
  $export['comment_default_mode_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dictionary_word';
  $strongarm->value = '50';
  $export['comment_default_per_page_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dictionary_word';
  $strongarm->value = '0';
  $export['comment_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dictionary_word';
  $strongarm->value = 1;
  $export['comment_form_location_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dictionary_word';
  $strongarm->value = '1';
  $export['comment_preview_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dictionary_word';
  $strongarm->value = 1;
  $export['comment_subject_field_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__dictionary_word';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'thumbed' => array(
        'custom_settings' => FALSE,
      ),
      'community_record' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'map_popup' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'found_in_dictionary_word' => array(
          'default' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'dictionary_word_navigation' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dictionary_word';
  $strongarm->value = '0';
  $export['language_content_type_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_dictionary_word';
  $strongarm->value = array();
  $export['menu_options_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_dictionary_word';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dictionary_word';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dictionary_word';
  $strongarm->value = '1';
  $export['node_preview_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dictionary_word';
  $strongarm->value = 1;
  $export['node_submitted_dictionary_word'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_dictionary_word_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_dictionary_word_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_dictionary_word_pattern';
  $strongarm->value = 'dictionary_word-term/[node:title]';
  $export['pathauto_node_dictionary_word_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_dictionary_word_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_dictionary_word_und_pattern'] = $strongarm;

  return $export;
}