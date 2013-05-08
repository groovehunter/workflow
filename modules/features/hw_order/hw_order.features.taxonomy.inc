<?php
/**
 * @file
 * hw_order.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hw_order_taxonomy_default_vocabularies() {
  return array(
    'hardware_workflow' => array(
      'name' => 'Hardware-Workflow',
      'machine_name' => 'hardware_workflow',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
