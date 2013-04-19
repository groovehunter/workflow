<?php
/**
 * @file
 * hw_order.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function hw_order_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Reviewer',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '77b568b2-7f56-fab4-e18c-9c20a2c82bca',
    'vocabulary_machine_name' => 'hardware_workflow',
    'parent' => array(
      0 => 'd11ba3a2-ef53-0194-89cd-c5fd2ec1ffcc',
    ),
  );
  $terms[] = array(
    'name' => 'Antragssteller',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '9af09e30-86f2-de54-6d18-af9a0e244865',
    'vocabulary_machine_name' => 'hardware_workflow',
    'parent' => array(
      0 => '77b568b2-7f56-fab4-e18c-9c20a2c82bca',
    ),
  );
  $terms[] = array(
    'name' => 'Genehmigender',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '2',
    'uuid' => 'd11ba3a2-ef53-0194-89cd-c5fd2ec1ffcc',
    'vocabulary_machine_name' => 'hardware_workflow',
  );
  return $terms;
}
