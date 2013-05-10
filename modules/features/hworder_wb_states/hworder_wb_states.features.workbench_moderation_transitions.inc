<?php
/**
 * @file
 * hworder_wb_states.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function hworder_wb_states_workbench_moderation_export_transitions() {
  $items = array(
    'antrag_vollst_ndig:genehmigung_erteilt' => array(
      'from_name' => 'antrag_vollst_ndig',
      'to_name' => 'genehmigung_erteilt',
    ),
    'antrag_vollst_ndig:genehmigung_nicht_erteilt' => array(
      'from_name' => 'antrag_vollst_ndig',
      'to_name' => 'genehmigung_nicht_erteilt',
    ),
    'bereit_zur_pr_fung:antrag_vollst_ndig' => array(
      'from_name' => 'bereit_zur_pr_fung',
      'to_name' => 'antrag_vollst_ndig',
    ),
    'bereit_zur_pr_fung:entwurf' => array(
      'from_name' => 'bereit_zur_pr_fung',
      'to_name' => 'entwurf',
    ),
    'entwurf:bereit_zur_pr_fung' => array(
      'from_name' => 'entwurf',
      'to_name' => 'bereit_zur_pr_fung',
    ),
    'genehmigung_erteilt:genehmigung_nicht_erteilt' => array(
      'from_name' => 'genehmigung_erteilt',
      'to_name' => 'genehmigung_nicht_erteilt',
    ),
    'genehmigung_erteilt:hardware_erstellt' => array(
      'from_name' => 'genehmigung_erteilt',
      'to_name' => 'hardware_erstellt',
    ),
    'hardware_angeschlossen:published' => array(
      'from_name' => 'hardware_angeschlossen',
      'to_name' => 'published',
    ),
    'hardware_erstellt:sw_installiert_versandbereit' => array(
      'from_name' => 'hardware_erstellt',
      'to_name' => 'sw_installiert_versandbereit',
    ),
    'hardware_erstellt:sw_server_wird_installiert' => array(
      'from_name' => 'hardware_erstellt',
      'to_name' => 'sw_server_wird_installiert',
    ),
    'hardware_erstellt:sw_sonstige_wird_installiert' => array(
      'from_name' => 'hardware_erstellt',
      'to_name' => 'sw_sonstige_wird_installiert',
    ),
    'hardware_erstellt:sw_windows_wird_installiert' => array(
      'from_name' => 'hardware_erstellt',
      'to_name' => 'sw_windows_wird_installiert',
    ),
    'hardware_versendet:hw_sendung_erhalten' => array(
      'from_name' => 'hardware_versendet',
      'to_name' => 'hw_sendung_erhalten',
    ),
    'hw_sendung_erhalten:hardware_angeschlossen' => array(
      'from_name' => 'hw_sendung_erhalten',
      'to_name' => 'hardware_angeschlossen',
    ),
    'sw_installiert_versandbereit:hardware_versendet' => array(
      'from_name' => 'sw_installiert_versandbereit',
      'to_name' => 'hardware_versendet',
    ),
    'sw_server_wird_installiert:sw_installiert_versandbereit' => array(
      'from_name' => 'sw_server_wird_installiert',
      'to_name' => 'sw_installiert_versandbereit',
    ),
    'sw_sonstige_wird_installiert:sw_installiert_versandbereit' => array(
      'from_name' => 'sw_sonstige_wird_installiert',
      'to_name' => 'sw_installiert_versandbereit',
    ),
    'sw_windows_wird_installiert:sw_installiert_versandbereit' => array(
      'from_name' => 'sw_windows_wird_installiert',
      'to_name' => 'sw_installiert_versandbereit',
    ),
  );
  return $items;
}
