#!/bin/bash

while :
do
	./case_genarate
	./bruteforce
	./solution
	if cmp bruteforce.txt solution.txt 
	then 
		echo "case matched"
		continue
	else 
		echo -e "there are mismatch\n"
		echo -e "input\n"
		cat input.txt
		echo -e "bruteforce solution\n"
		cat bruteforce.txt
		echo -e "optimize solution\n"
		cat solution.txt
		  exit 1
	fi
done 

