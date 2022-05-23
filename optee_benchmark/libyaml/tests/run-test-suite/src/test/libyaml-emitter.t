#!/bin/bash

got=$(mktemp)

count=0
for test in test/*.events; do
  want=${test//.events/.out}
  label="Emitting '$test' equals '$want'"
  rc=0
  ./libyaml-emitter $test > $got || rc=$?
  if [[ $rc -ne 0 ]]; then
    echo "not ok $((++count)) - Error code $rc"
    continue
  fi
  rc=0
  diff=$(diff -u $want $got) || rc=$?
  if [[ $rc -eq 0 ]]; then
    echo "ok $((++count)) - $label"
  else
    echo "not ok $((++count)) - $label"
    diff=${diff//$'\n'/$'\n'# }
    echo "# $diff"
  fi
done

echo "1..$count"
