#include <stdlib.h>
#include <stdio.h>
#include "../include/character.h"


Class Fighter = {"FIGHTER", false};
Class Cleric = {"CLERIC", true};
Class Magicuser = {"MAGIC-USER", true};

extern struct Character newCharacter;

void chooseClass() {
    printf("> PLEASE CHOOSE A CLASS:\n> ");

    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "fighter") == 0) {
        newCharacter.CLASS = Fighter;
        newCharacter.HITPOINTS_MAX = roll(1,6) + 1;
        newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

        newCharacter.LEVEL_FIGHTER = 1;
        newCharacter.LEVEL_CLERIC = 0;
        newCharacter.LEVEL_MAGIC_USER = 0;

    } else if((strcmp(input, "cleric") == 0) && (newCharacter.SPECIES.CLERIC_ALLOWED == true)) {
        newCharacter.CLASS = Cleric;
        newCharacter.HITPOINTS_MAX = roll(1,6);
        newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

        newCharacter.LEVEL_FIGHTER = 0;
        newCharacter.LEVEL_CLERIC = 1;
        newCharacter.LEVEL_MAGIC_USER = 0;

    }else if((strcmp(input, "magicuser") == 0) && (newCharacter.SPECIES.MAGIC_USER_ALLOWED == true)) {
        newCharacter.CLASS = Magicuser;
        newCharacter.HITPOINTS_MAX = roll(1,6);
        newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

        newCharacter.LEVEL_FIGHTER = 0;
        newCharacter.LEVEL_CLERIC = 0;
        newCharacter.LEVEL_MAGIC_USER = 1;

    } else {
        printf("> YOU CAN'T CHOOSE THAT! PLEASE TRY AGAIN.\n");
        chooseClass(newCharacter);
        return;
    }
}


