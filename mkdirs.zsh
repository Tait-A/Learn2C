#!/bin/zsh

for ((i=1; i<=$2; i++))
	do mkdir "$1$i"
done
