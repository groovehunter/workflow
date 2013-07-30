api = 2
core = 7.x

; Include Drupal core and any core patches from Build Kit
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org-core.make


projects[workflow][type] = profile
projects[workflow][download][type] = git
projects[workflow][download][url] = http://auedv18/gitweb/?p=workflow/.git;a=blob_plain;f=build-workflow.make;hb=HEAD
projects[workflow][download][branch] = master
