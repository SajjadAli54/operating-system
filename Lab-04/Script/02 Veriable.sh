#### This Program uses variable declaration and there usage.

#! /bin/bash

NAME="Sajjad Ali"	# Normal/Generic Variable declaration

echo "Greetings from $NAME"	# we use '$' sign to access the variable's value

# Variable declaration for some specific operations

let NUM1=3
let NUM2=5
let SUM=$NUM1+$NUM2

echo "Sum of $NUM1 and $NUM2 is $SUM"
