<?php
/**
 * @file
 * hw_order.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hw_order_node_info() {
  $items = array(
    'hardware_antrag' => array(
      'name' => t('Hardware-Antrag'),
      'base' => 'node_content',
      'description' => t('Antrag auf Hardware, Abwicklung der Prüfung, Genehmigung und Installation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
