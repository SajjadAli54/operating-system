#!/bin/bash
function crawler(){
	FILES=`ls`
	for i in $FILES
	do
		if [ -d $i ]
		then
			cd $1
			crawler $i
		elif [ -f $i ]
		then
			echo $i
		fi
	done
}

crawler $1



