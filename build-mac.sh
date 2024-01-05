#!/bin/bash

counter_file="build_counter.txt"
if [ ! -e "$counter_file" ]; then
  echo 0 > "$counter_file"
fi

count=$(<"$counter_file")
((count++))

echo "Build Sucessful! "

echo "Build number: $count"

echo "$count" > "$counter_file"

gcc -g -O3 -Wall -Wextra -pedantic -Wno-missing-braces src/main.c src/dice.c src/initmenu.c src/character.c src/equipment.c src/species-handler.c src/class-handler.c -o bin/build-mac

