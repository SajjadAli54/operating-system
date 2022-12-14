#!/bin/bash
read -p "Please enter your name : " NAME;

echo "Hello $NAME Welcome to class";

if [ "$NAME" == "Brad" ]
then
	echo "Hello $NAME ! You are allowed to enter the office";
fi

NUM=7
VAL=5

if [ "$NUM" -eq "$VAL" ]
then
	echo "$NUM and $VAL are equal";
elif [ "$NUM" -gt "$VAL" ]
then
	echo "$NUM is greater";
elif [ "$NUM" -lt "$VAL" ]
then
	echo "$NUM is less";
else
	echo "Both are equal";
fi

for i in $NAME
do
echo $i;
done

read -p "Are you over 18? " ANSWER
case "$ANSWER" in
[yY])
echo "You can make NIC Card";;
[nN])
echo "Beta Barhe ho jao pehle";;
*)
echo "Please enter y for yes and n for no"
esac







