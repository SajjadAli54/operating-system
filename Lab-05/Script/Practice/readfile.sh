#1/bin/bash
LINE=1
FILE="./case.sh"
while read -r CURRENTLINE 
do
    echo "$LINE : $CURRENTLINE"
    ((LINE++))
done <$FILE
