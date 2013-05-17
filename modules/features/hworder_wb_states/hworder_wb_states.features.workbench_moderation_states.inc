<?php
/**
 * @file
 * hworder_wb_states.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function hworder_wb_states_workbench_moderation_export_states() {
  $items = array(
    'antrag_vollst_ndig' => array(
      'name' => 'antrag_vollst_ndig',
      'label' => 'Antrag vollständig',
      'description' => 'Antrag wurde abgenommen, nachdem er gegebenenfalls vom Autor nachkorrigiert wurde',
      'weight' => '-8',
    ),
    'bereit_zur_pr_fung' => array(
      'name' => 'bereit_zur_pr_fung',
      'label' => 'Bereit zur Prüfung',
      'description' => 'Antrag (wiederholt) vorgelegt zur Prüfung durch EDV-Technik ',
      'weight' => '-9',
    ),
    'entwurf' => array(
      'name' => 'entwurf',
      'label' => 'Entwurf',
      'description' => 'Antrag im Entwurf beim Antragssteller',
      'weight' => '-10',
    ),
    'genehmigung_erteilt' => array(
      'name' => 'genehmigung_erteilt',
      'label' => 'Genehmigung erteilt',
      'description' => 'Von EDV-Leitung genehmigt und Auftrag erteilt',
      'weight' => '-7',
    ),
    'genehmigung_nicht_erteilt' => array(
      'name' => 'genehmigung_nicht_erteilt',
      'label' => 'Genehmigung nicht erteilt',
      'description' => 'antrag wurde nicht genehmigt. Ende.',
      'weight' => '-6',
    ),
    'hardware_angeschlossen' => array(
      'name' => 'hardware_angeschlossen',
      'label' => 'Hardware angeschlossen',
      'description' => 'Hardware durch Labortechniker am Zielort aufgebaut und angeschlossen',
      'weight' => '2',
    ),
    'hardware_erstellt' => array(
      'name' => 'hardware_erstellt',
      'label' => 'Hardware erstellt',
      'description' => 'Hardware komplett zusammengebaut, autom.Gabelung in SW-Zweige',
      'weight' => '-5',
    ),
    'hardware_versendet' => array(
      'name' => 'hardware_versendet',
      'label' => 'Hardware versendet',
      'description' => 'Hardware ist unterwegs',
      'weight' => '0',
    ),
    'hw_sendung_erhalten' => array(
      'name' => 'hw_sendung_erhalten',
      'label' => 'HW-Sendung erhalten',
      'description' => 'Hardware durch Labortechniker erhalten',
      'weight' => '1',
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Hardware in Betrieb',
      'description' => 'Hardware in Betrieb - Prozess abgeschlossen',
      'weight' => '3',
    ),
    'sw_installiert_versandbereit' => array(
      'name' => 'sw_installiert_versandbereit',
      'label' => 'versandbereit, SW installiert ',
      'description' => 'Versandbereit, gegebenenfalls Software installiert',
      'weight' => '-1',
    ),
    'sw_server_wird_installiert' => array(
      'name' => 'sw_server_wird_installiert',
      'label' => 'SW Server wird installiert',
      'description' => 'Hardware bereitgestellt für Installation von Serverkomponenten',
      'weight' => '-3',
    ),
    'sw_sonstige_wird_installiert' => array(
      'name' => 'sw_sonstige_wird_installiert',
      'label' => 'SW sonstige wird installiert',
      'description' => 'Hardware bereitgestellt für Installation diverser Software ',
      'weight' => '-2',
    ),
    'sw_windows_wird_installiert' => array(
      'name' => 'sw_windows_wird_installiert',
      'label' => 'SW Windows wird installiert',
      'description' => 'Hardware bereitgestellt für Installation von Windows',
      'weight' => '-4',
    ),
  );
  return $items;
}
