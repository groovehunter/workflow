api = 2
core = 7.x

;includes[] = https://raw.github.com/groovehunter/openspirit/master/basemodules.make
includes[] = basemodules.make
defaults[projects][subdir] = "contrib"


;projects[][version] = ""

; Modules =====================================================================
projects[contact][version] = "2.x-dev"
projects[print][version] = "1.2"
projects[uif][version] = "1.5"
projects[date][version] = "2.6"
projects[devel][version] = "1.3"
projects[drush_ctex_bonus][version] = "1.x-dev"
projects[entityreference][version] = "1.0"
projects[field_group][version] = "1.1"
projects[masquerade_nominate][version] = "1.0-alpha1"
projects[masquerade][version] = "1.0-rc5"
projects[rules][version] = "2.3"
projects[rules_conditional][version] = "1.0-beta2"
projects[strongarm][version] = "2.0"
projects[uuid][version] = "1.0-alpha3"
projects[uuid_features][version] = "1.0-alpha3"



;workflow related, or deps of workflow ================
projects[profile2][version] = "1.3"
projects[token][version] = "1.5"
projects[workbench][version] = "1.2"
projects[workbench_access][version] = "1.2"
projects[workbench_email][version] = "2.1"
projects[workbench_moderation][version] = "1.3"
projects[workbench_moderation][patch][] = "http://drupal.org/files/workbench_moderation-featuresint-state-transition-1314508-57.patch"

projects[workbench_moderation_notes][version] = "1.x-dev"
projects[workbench_profile][version] = "1.1"



