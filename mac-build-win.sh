#!/bin/bash

#brew install mingw-w64
/usr/local/cellar/mingw-w64/11.0.1/toolchain-x86_64/bin/x86_64-w64-mingw32-gcc -g -O3 -Wall -Wextra -pedantic -Wno-missing-braces src/main.c src/dice.c src/initmenu.c src/character.c src/equipment.c src/species-handler.c src/class-handler.c src/multiclass.c src/spells.c -I/usr/local/cellar/mingw-w64/11.0.1/toolchain-x86_64/lib/gcc/x86_64-w64-mingw32/13.2.0/include -o bin/build-win.exe

counter_file="build_counter.txt"
if [ ! -e "$counter_file" ]; then
  echo 0 > "$counter_file"
fi

count=$(<"$counter_file")
((count++))

echo "Build attempt complete "

echo "Build attempt: $count"

echo "$count" > "$counter_file"
