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
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'workbench',
  );

  // Exported permission: access workbench access by role.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: moderate content from antrag_vollst_ndig to genehmigung_erteilt.
  $permissions['moderate content from antrag_vollst_ndig to genehmigung_erteilt'] = array(
    'name' => 'moderate content from antrag_vollst_ndig to genehmigung_erteilt',
    'roles' => array(
      0 => 'au_edvabtleit',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from bereit_zur_pr_fung to antrag_vollst_ndig.
  $permissions['moderate content from bereit_zur_pr_fung to antrag_vollst_ndig'] = array(
    'name' => 'moderate content from bereit_zur_pr_fung to antrag_vollst_ndig',
    'roles' => array(
      0 => 'au_edv_technik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from bereit_zur_pr_fung to entwurf.
  $permissions['moderate content from bereit_zur_pr_fung to entwurf'] = array(
    'name' => 'moderate content from bereit_zur_pr_fung to entwurf',
    'roles' => array(
      0 => 'au_edv_technik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from entwurf to bereit_zur_pr_fung.
  $permissions['moderate content from entwurf to bereit_zur_pr_fung'] = array(
    'name' => 'moderate content from entwurf to bereit_zur_pr_fung',
    'roles' => array(
      0 => 'au_laborleitung',
      1 => 'be_laborleitung',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from genehmigung_erteilt to hardware_erstellt.
  $permissions['moderate content from genehmigung_erteilt to hardware_erstellt'] = array(
    'name' => 'moderate content from genehmigung_erteilt to hardware_erstellt',
    'roles' => array(
      0 => 'au_edv_technik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from hardware_angeschlossen to published.
  $permissions['moderate content from hardware_angeschlossen to published'] = array(
    'name' => 'moderate content from hardware_angeschlossen to published',
    'roles' => array(
      0 => 'au_edv_technik',
      1 => 'au_oper',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from hardware_erstellt to sw_installiert_versandbereit.
  $permissions['moderate content from hardware_erstellt to sw_installiert_versandbereit'] = array(
    'name' => 'moderate content from hardware_erstellt to sw_installiert_versandbereit',
    'roles' => array(
      0 => 'au_edv',
      1 => 'au_soft',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from hardware_versendet to hw_sendung_erhalten.
  $permissions['moderate content from hardware_versendet to hw_sendung_erhalten'] = array(
    'name' => 'moderate content from hardware_versendet to hw_sendung_erhalten',
    'roles' => array(
      0 => 'au_technik',
      1 => 'be_technik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from hw_sendung_erhalten to hardware_angeschlossen.
  $permissions['moderate content from hw_sendung_erhalten to hardware_angeschlossen'] = array(
    'name' => 'moderate content from hw_sendung_erhalten to hardware_angeschlossen',
    'roles' => array(
      0 => 'au_technik',
      1 => 'be_technik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from sw_installiert_versandbereit to hardware_versendet.
  $permissions['moderate content from sw_installiert_versandbereit to hardware_versendet'] = array(
    'name' => 'moderate content from sw_installiert_versandbereit to hardware_versendet',
    'roles' => array(
      0 => 'au_edv_technik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'au_edv',
      2 => 'au_edv_technik',
      3 => 'au_edvabtleit',
      4 => 'au_oper',
      5 => 'au_soft',
      6 => 'au_technik',
      7 => 'be_technik',
    ),
    'module' => 'node',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
