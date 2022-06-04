#!/bin/bash

## colors

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

## check if 19920104_091532.log file is here

log_ok=$(ls 19920104_091532.log 2>/dev/null | wc -l)
if [ "$log_ok" -eq "0" ]
then
    printf "19920104_091532.log needed\n"
    exit
fi

## test

make re && ./account > account.log
timestamp=$(head -1 account.log | cut -b-17)
cp 19920104_091532.log soluce.log
sed -i "s/\[19920104_091532\]/$timestamp/g" soluce.log
res=$(diff account.log soluce.log | wc -c)
if [ "$res" -eq "0" ]
then
	printf "[${GREEN}OK${NC}] no differences\n"
	rm account.log soluce.log
else
	printf "[${RED}KO${NC}] some differences spotted (check account.log and soluce.log)\n"
fi
