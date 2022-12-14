#!/bin/bash

# Array declaration	: This array is dynamic
NAMES=("Sajjad Ali" "Sajan Ali" "Ahrar Ali" "Kulsoom Ali" "Kulzum" "Ammar" "Sanjay heroin");

echo "First Index  : ${NAMES}";	# These both commands
echo "Second Index : ${NAMES[0]}";	# will give the same output

NAMES[7]="Salahuddin";
NAMES[8]="Ramiya"

echo "Last : ${NAMES[7]}";
echo "Last : ${NAMES[8]}";
