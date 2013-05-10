api = 2
core = 7.x

;includes[] = https://raw.github.com/groovehunter/openspirit/master/basemodules.make
includes[] = basemodules.make

;projects[][subdir] = contrib
;projects[][version] = ""

; Modules =====================================================================
projects[contact][subdir] = contrib
projects[contact][version] = "2.x-dev"

projects[print][version] = "1.2"
projects[print][subdir] = contrib

projects[uif][version] = "1.5"
projects[uif][subdir] = contrib

projects[drush_ctex_bonus][version] = "1.x-dev"
projects[drush_ctex_bonus][subdir] = contrib

projects[masquerade_nominate][version] = "1.0-alpha1"
projects[masquerade_nominate][subdir] = contrib

projects[masquerade][version] = "1.0-rc5"
projects[masquerade][subdir] = contrib

projects[uuid][version] = "1.0-alpha3"
projects[uuid][subdir] = contrib

projects[uuid_features][subdir] = contrib
projects[uuid_features][version] = "1.0-alpha3"



;workflow related, or deps of workflow ================
projects[profile2][version] = "1.3"
projects[profile2][subdir] = contrib

projects[token][version] = "1.5"
projects[token][subdir] = contrib

projects[workbench][version] = "1.2"
projects[workbench][subdir] = contrib

projects[workbench_access][version] = "1.2"
projects[workbench_access][subdir] = contrib

projects[workbench_email][version] = "2.1"
projects[workbench_email][subdir] = contrib

projects[workbench_moderation][version] = "1.3"
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][patch][] = "http://drupal.org/files/workbench_moderation-featuresint-state-transition-1314508-57.patch"


projects[workbench_profile][version] = "1.1"
projects[workbench_profile][subdir] = contrib



