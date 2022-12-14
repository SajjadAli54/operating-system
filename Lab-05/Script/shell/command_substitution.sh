#!/bin/bash
TODAY=$(date +%y%m%d)
ls /usr/bin -al > log.$TODAY
echo $TODAY

