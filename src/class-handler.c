#include "../include/character.h"
#include "../include/dice.h"

Class Fighter = {"FIGHTER", false};
Class Cleric = {"CLERIC", true};
Class Magicuser = {"MAGIC-USER", true};

void chooseClass(Character *newCharacter) {
    char input[50]; 
    
    printf("> PLEASE CHOOSE A CLASS: FIGHTER, CLERIC OR MAGIC-USER\n> ");

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "fighter") == 0) {
        newCharacter->CLASS[0] = Fighter;
        newCharacter->HITPOINTS_MAX = roll(1,6) + 1;
        newCharacter->HITPOINTS_CURRENT = newCharacter->HITPOINTS_MAX;

        newCharacter->LEVEL_FIGHTER = 1;
        newCharacter->LEVEL_CLERIC = 0;
        newCharacter->LEVEL_MAGIC_USER = 0;

    } else if((strcmp(input, "cleric") == 0) && (newCharacter->SPECIES.CLERIC_ALLOWED == true)) {
        newCharacter->CLASS[0] = Cleric;
        newCharacter->HITPOINTS_MAX = roll(1,6);
        newCharacter->HITPOINTS_CURRENT = newCharacter->HITPOINTS_MAX;

        newCharacter->LEVEL_FIGHTER = 0;
        newCharacter->LEVEL_CLERIC = 1;
        newCharacter->LEVEL_MAGIC_USER = 0;

    }else if((strcmp(input, "magicuser") == 0) && (newCharacter->SPECIES.MAGIC_USER_ALLOWED == true)) {
        newCharacter->CLASS[0] = Magicuser;
        newCharacter->HITPOINTS_MAX = roll(1,6);
        newCharacter->HITPOINTS_CURRENT = newCharacter->HITPOINTS_MAX;

        newCharacter->LEVEL_FIGHTER = 0;
        newCharacter->LEVEL_CLERIC = 0;
        newCharacter->LEVEL_MAGIC_USER = 1;

    } else {
        printf("> YOU CAN'T CHOOSE THAT! PLEASE TRY AGAIN.\n");
        chooseClass(newCharacter);
        return;
    }
}


