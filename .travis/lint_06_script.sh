#!/usr/bin/env bash
#
# Copyright (c) 2018 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

export LC_ALL=C


contrib/devtools/check-doc.py
contrib/devtools/logprint-scanner.py

if [ "$TRAVIS_EVENT_TYPE" = "pull_request" ]; then
  contrib/devtools/lint-whitespace.sh
  contrib/devtools/commit-script-check.sh $TRAVIS_COMMIT_RANGE
  test/lint/lint-qt.sh
fi
