#!/bin/bash

USERS=("sajjad" "sajan" "kulsoom" "asma" "aqsa")
for i in {0..4}
do
sudo adduser ${USERS[$i]}
sudo usermod -g genius ${USERS[$i]}
done
