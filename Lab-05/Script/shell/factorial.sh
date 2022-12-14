#!/bin/bash
fact(){
	NUM=$1
	VAL=1
	while [ $NUM -gt 0 ]
	do
		VAL=$[$VAL * $NUM]
		((NUM--))
	done
	echo "Factorial of $1 is $VAL"
}

VAL=$(fact $1)
echo $VAL


