
#! /bin/bash

# Scalar Variables	: Stores one value at a time, but can be modified

NAME="Zara Ali"

# Accessing the Variables

echo "Name $NAME"

NAME="Yash"	# Completely fine

# ReadOnly Variables	: Constant Variables can not be modified

PI=3.14
readonly PI
echo "PI $PI"
# PI=5		# This command is an error if you remove the comment

# Unsetting The Variables

unset NAME

echo $NAME	# It will print nothing

# unset PI	# This command is an error if you remove the comment
