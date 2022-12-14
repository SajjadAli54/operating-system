#!/bin/bash
fact ()
{
    counter=$1 #first argument
    factorial=1
    while [ $counter -gt 0 ] #while counter > 0
    do
        factorial=$(( $factorial * $counter ))
        counter=$(( $counter - 1 ))
    done
    echo $factorial
}

fact 4