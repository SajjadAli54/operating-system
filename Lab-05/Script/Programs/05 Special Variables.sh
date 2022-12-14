#!/bin/bash

echo $$	# Prints the process id of the current shell
echo $0	# filename of the current script
echo "File Name: $0"
echo "First Parameter : $1"
echo "Second Parameter : $2"
echo "Quoted Values: $@"
echo "Quoted Values: $*"
echo "Total Number of Parameters : $#"
