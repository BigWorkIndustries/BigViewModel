#!/bin/bash

rm -Rf ../docs/appledoc/
mkdir -p ../docs/appledoc/

/usr/local/bin/appledoc \
--project-name "BigViewModel" \
--project-company "BigWork Industries, LLC" \
--company-id "com.bigworkindustries" \
--output "../docs/appledoc/" \
--logformat xcode \
--keep-intermediate-files \
--no-repeat-first-par \
--no-warn-invalid-crossref \
--ignore "*.m" \
--ignore Generated-Models \
--ignore Pods \
--keep-undocumented-objects \
--keep-undocumented-members \
--exit-threshold 4 \
"../Pod"

#--index-desc "../README.md" \



