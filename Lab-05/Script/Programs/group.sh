#!/bin/bash
NAMES=("sajjad" "sajan" "asma" "aqsa" "kulsoom")
sudo addgroup mygroup
for i in {0..4}
do
	sudo usermod -g mygroup ${NAMES[$i]}
done

