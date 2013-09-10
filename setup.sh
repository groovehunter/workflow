#!/bin/bash

# users
drush dl user_import
drush en user_import
drush user-import ../../profiles/workflow/data/userimport.csv

# site related
# language
drush dl drush_language
drush en drush_language
drush language-add de
drush language-default de


