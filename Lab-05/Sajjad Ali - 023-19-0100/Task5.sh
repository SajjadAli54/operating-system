#!/bin/bash
FILES="file1.txt file2.txt file3.txt"
for i in $FILES
do
  touch $i
done

for i in $FILES
do
  mv $i "new-$i"
done
