<?php
/**
 * @file
 * hworder_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hworder_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'edvltg',
      1 => 'edvtech',
      2 => 'laborleitung',
      3 => 'labortechniker',
      4 => 'sw-dev',
    ),
    'module' => 'node',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'edvltg',
      1 => 'edvtech',
      2 => 'laborleitung',
      3 => 'labortechniker',
      4 => 'sw-dev',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'edvltg',
      1 => 'edvtech',
      2 => 'laborleitung',
      3 => 'labortechniker',
      4 => 'sw-dev',
    ),
    'module' => 'workbench',
  );

  // Exported permission: access workbench access by role.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      0 => 'edvltg',
      1 => 'edvtech',
      2 => 'laborleitung',
      3 => 'labortechniker',
      4 => 'sw-dev',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: create hardware_antrag content.
  $permissions['create hardware_antrag content'] = array(
    'name' => 'create hardware_antrag content',
    'roles' => array(
      0 => 'edvtech',
      1 => 'laborleitung',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any hardware_antrag content.
  $permissions['delete any hardware_antrag content'] = array(
    'name' => 'delete any hardware_antrag content',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hardware_antrag content.
  $permissions['delete own hardware_antrag content'] = array(
    'name' => 'delete own hardware_antrag content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hardware_antrag content.
  $permissions['edit any hardware_antrag content'] = array(
    'name' => 'edit any hardware_antrag content',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hardware_antrag content.
  $permissions['edit own hardware_antrag content'] = array(
    'name' => 'edit own hardware_antrag content',
    'roles' => array(
      0 => 'laborleitung',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate content from antrag_vollst_ndig to genehmigung_erteilt.
  $permissions['moderate content from antrag_vollst_ndig to genehmigung_erteilt'] = array(
    'name' => 'moderate content from antrag_vollst_ndig to genehmigung_erteilt',
    'roles' => array(
      0 => 'edvltg',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from bereit_zur_pr_fung to antrag_vollst_ndig.
  $permissions['moderate content from bereit_zur_pr_fung to antrag_vollst_ndig'] = array(
    'name' => 'moderate content from bereit_zur_pr_fung to antrag_vollst_ndig',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from bereit_zur_pr_fung to entwurf.
  $permissions['moderate content from bereit_zur_pr_fung to entwurf'] = array(
    'name' => 'moderate content from bereit_zur_pr_fung to entwurf',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from entwurf to bereit_zur_pr_fung.
  $permissions['moderate content from entwurf to bereit_zur_pr_fung'] = array(
    'name' => 'moderate content from entwurf to bereit_zur_pr_fung',
    'roles' => array(
      0 => 'laborleitung',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from genehmigung_erteilt to hardware_erstellt.
  $permissions['moderate content from genehmigung_erteilt to hardware_erstellt'] = array(
    'name' => 'moderate content from genehmigung_erteilt to hardware_erstellt',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from hardware_erstellt to published.
  $permissions['moderate content from hardware_erstellt to published'] = array(
    'name' => 'moderate content from hardware_erstellt to published',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'node',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'edvtech',
      1 => 'laborleitung',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'edvtech',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'edvtech',
      1 => 'laborleitung',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'edvtech',
      1 => 'laborleitung',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'edvltg',
      1 => 'edvtech',
      2 => 'laborleitung',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'edvltg',
      1 => 'edvtech',
      2 => 'laborleitung',
    ),
    'module' => 'node',
  );

  return $permissions;
}
