<?php
/**
 * @file
 * hw_order.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hw_order_user_default_roles() {
  $roles = array();

  // Exported role: edvltg.
  $roles['edvltg'] = array(
    'name' => 'edvltg',
    'weight' => '6',
  );

  // Exported role: edvtech.
  $roles['edvtech'] = array(
    'name' => 'edvtech',
    'weight' => '5',
  );

  // Exported role: laborleitung.
  $roles['laborleitung'] = array(
    'name' => 'laborleitung',
    'weight' => '2',
  );

  // Exported role: labortechniker.
  $roles['labortechniker'] = array(
    'name' => 'labortechniker',
    'weight' => '3',
  );

  // Exported role: sw-dev.
  $roles['sw-dev'] = array(
    'name' => 'sw-dev',
    'weight' => '4',
  );

  return $roles;
}
