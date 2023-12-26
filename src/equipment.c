#include "../include/character.h"
#include <stdio.h>

Equipment leather_armour = {"Armour", "Provides an AC of 3", 15};
Equipment chain_armour = {"Armour", "Provides an AC of 5", 30};
Equipment plate_armour = {"Armour", "Provides an AC of 7", 50};
Equipment shield = {"Armour", "Adds + 1 to AC or provide AC 8 alone.", 10};

extern struct Character newCharacter;

void chooseArmour() {

    char input[50];


    if(strcmp(newCharacter.CLASS.NAME,  "MAGIC-USER") == 0) {
        newCharacter.ARMOUR_CLASS = 7;
        newCharacter.EQUIPMENT[0] = leather_armour;
        newCharacter.GOLD = newCharacter.GOLD - leather_armour.COST;
        

    } else {
        printf("> CHOOSE AN ARMOUR: LEATHER (5 GP), CHAIN (30 GP) OR PLATE (50 GP).\n> ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s", input);

        if(strcmp("leather", input) == 0) {
            newCharacter.ARMOUR_CLASS = 7;
            newCharacter.EQUIPMENT[0] = leather_armour;
            newCharacter.GOLD = newCharacter.GOLD - leather_armour.COST;

        } else if(strcmp("chain", input) == 0) {
            newCharacter.ARMOUR_CLASS = 5;
            newCharacter.EQUIPMENT[0] = chain_armour;
            newCharacter.GOLD = newCharacter.GOLD - chain_armour.COST;

        } else if(strcmp("plate", input) == 0 && newCharacter.GOLD >= 50){
            newCharacter.ARMOUR_CLASS = 3;
            newCharacter.EQUIPMENT[0] = plate_armour;
            newCharacter.GOLD = newCharacter.GOLD - plate_armour.COST;

        } else {
            printf("> WE DON'T SELL THAT HERE.\n");
            chooseArmour();
        }
    }
   
}
