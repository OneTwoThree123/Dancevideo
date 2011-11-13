<?php
/**
 * @file
 * dancevideo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dancevideo_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab__dancevideo';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous__dancevideo';
  $strongarm->value = 0;
  $export['comment_anonymous__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode__dancevideo';
  $strongarm->value = 1;
  $export['comment_default_mode__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page__dancevideo';
  $strongarm->value = '50';
  $export['comment_default_per_page__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location__dancevideo';
  $strongarm->value = 1;
  $export['comment_form_location__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview__dancevideo';
  $strongarm->value = '1';
  $export['comment_preview__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field__dancevideo';
  $strongarm->value = 1;
  $export['comment_subject_field__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment__dancevideo';
  $strongarm->value = '2';
  $export['comment__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type__dancevideo';
  $strongarm->value = '0';
  $export['language_content_type__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options__dancevideo';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent__dancevideo';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options__dancevideo';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview__dancevideo';
  $strongarm->value = '1';
  $export['node_preview__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted__dancevideo';
  $strongarm->value = 1;
  $export['node_submitted__dancevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue__dancevideo';
  $strongarm->value = '保存和添加字段';
  $export['save_continue__dancevideo'] = $strongarm;

  return $export;
}
