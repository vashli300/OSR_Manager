#!bin/bash
gcc -g -Wall -Wextra -pedantic -Wno-missing-braces src/main.c src/dice.c src/initmenu.c src/character.c -o bin/build-mac
