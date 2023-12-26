#!bin/bash
gcc -g -O3 -Wall -Wextra -pedantic -Wno-missing-braces src/main.c src/dice.c src/initmenu.c src/character.c src/equipment.c src/species-handler.c src/class-handler.c -o bin/build-mac
