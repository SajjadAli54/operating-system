#!/bin/bash
read -p "Please input file name : " FILE
if [ -d $FILE ]
then
    echo "$FILE is a directory"
elif [ -f $FILE ]
then
    echo "$FILE is a file"
else
    echo "$FILE doesn't exist"
fi