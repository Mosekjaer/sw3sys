#!/bin/bash
mkdir test && touch ./test/test.txt
echo "Test beskrivelse" >> ./test/test.txt
ls -l ./test/

read -p "Done, what more do you want?" whatyouwant
echo $whatyouwant

g++ main.cpp -o main
./main
