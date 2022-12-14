#!/bin/bash
cat "group.sh"
if [ "$?" -ne "0" ]; then
	echo "Error! Reading $1 failed"
fi

let VAL=5
let NUM=5
let BOOL=$VAL==$NUM
if [ BOOL ]; then
	echo "$NUM and $VAL are equal"
fi

