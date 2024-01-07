#include "../include/character.h"

extern Character newCharacter;

void multiclassSetup() {
    printf("> WOULD YOU LIKE TO SETUP MULTICLASSING? (y/n)\n> ");
    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "y") == 0) {
        printf("> CHOOSE MAGIC-USER PRIMARY (1) OR FIGHTER PRIMARY (2)\n> ");

        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s", input);
        
        if(strcmp(input, "1") == 0) {
            newCharacter.CLASS[0] = Magicuser;
            newCharacter.CLASS[1] = Fighter;

            newCharacter.HITPOINTS_MAX = roll(1,6);
            newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

            newCharacter.LEVEL_FIGHTER = 1;
            newCharacter.LEVEL_CLERIC = 0;
            newCharacter.LEVEL_MAGIC_USER = 1;

        } else if(strcmp(input, "2") == 0) {
            newCharacter.CLASS[0] = Fighter;
            newCharacter.CLASS[1] = Magicuser;

            newCharacter.HITPOINTS_MAX = roll(1,6) + 1;
            newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

            newCharacter.LEVEL_FIGHTER = 1;
            newCharacter.LEVEL_CLERIC = 0;
            newCharacter.LEVEL_MAGIC_USER = 1;

        }  else {
            printf("> I SEE HOW THIS IS.");
            return;
        }

        


    } else {
        return;
    }


}
