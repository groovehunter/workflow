#!/bin/bash

# users
drush user-import profiles/workflow/data/userimport.csv

# site related
drush language-add de
drush language-default de
