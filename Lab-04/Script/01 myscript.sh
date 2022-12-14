#! /bin/bash
## Strictly typed language
# printing Hello World

echo "Hello World"

#### Vraibels:
###   Variable in always capital letters	Convention
###   letters, combination letters and underscore

NAME="Sajjad"
echo "Greetings $NAME from BS4"
## $ is used to refer the variables

## Variables for computations

let N1=7
let N2=7
let NUM=$N1+$N2	# Output will be 8
echo $NUM

let BOOL=$N1==$N2
echo $BOOL
## Comparing numbers in if statement

if [ $N1 == $N2 ]
then
	echo "Both numbners are equal"
else
	echo "Both numbers are different"
fi

