#include "../include/character.h"


Equipment dagger = {"Weapon", "Small and nifty blade", 3, true, true, true};

Equipment leather_armour = {"Armour", "Provides an AC of 3", 15, true, true, true};
Equipment chain_armour = {"Armour", "Provides an AC of 5", 30, true, true, false};
Equipment plate_armour = {"Armour", "Provides an AC of 7", 50, true, true, false};
Equipment shield = {"Armour", "Adds + 1 to AC or provide AC 8 alone.", 10, true, true, true};

void chooseArmour(Character *newCharacter) {
    char input[50];


    if(strcmp(newCharacter->CLASS[0].NAME,  "MAGIC-USER") == 0) {
        newCharacter->ARMOUR_CLASS = 7;
        newCharacter->EQUIPMENT[0] = leather_armour;
        newCharacter->GOLD = newCharacter->GOLD - leather_armour.COST;
        return;
        
    } else {
        printf("> CHOOSE AN ARMOUR: LEATHER (5 GP), CHAIN (30 GP) OR PLATE (50 GP).\n> ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s", input);

        if(strcmp("leather", input) == 0) {
            newCharacter->ARMOUR_CLASS = 7;
            newCharacter->EQUIPMENT[0] = leather_armour;
            newCharacter->GOLD = newCharacter->GOLD - leather_armour.COST;

        } else if(strcmp("chain", input) == 0) {
            newCharacter->ARMOUR_CLASS = 5;
            newCharacter->EQUIPMENT[0] = chain_armour;
            newCharacter->GOLD = newCharacter->GOLD - chain_armour.COST;

        } else if(strcmp("plate", input) == 0 && newCharacter->GOLD >= 50){
            newCharacter->ARMOUR_CLASS = 3;
            newCharacter->EQUIPMENT[0] = plate_armour;
            newCharacter->GOLD = newCharacter->GOLD - plate_armour.COST;

        } else {
            printf("> WE DON'T SELL THAT HERE.\n");
            chooseArmour(newCharacter);
        }

        return;
    }
}

void chooseWeapon(Character *newCharacter) {
    char input[50];

    if(strcmp(newCharacter->CLASS[0].NAME, Fighter.NAME) == 0 || strcmp(newCharacter->CLASS[0].NAME, Cleric.NAME) == 0) {
        printf("> CHOOSE A WEAPON!\n> SWORD (10GP), DAGGER (3GP), SHORTBOW AND 20 ARROWS (type \"bow\") (30GP) OR NONE\n> ");
      
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s", input);

        if(strcmp(input, "sword")==0 && newCharacter->GOLD >= 10) {
            newCharacter->EQUIPMENT[1] = sword;
            newCharacter->GOLD = newCharacter->GOLD - 10;
        } else if(strcmp(input, "dagger")==0 && newCharacter->GOLD >= 3) {
            newCharacter->EQUIPMENT[1] = dagger;
            newCharacter->GOLD = newCharacter->GOLD - 3;
        } else if(strcmp(input, "bow")==0 && newCharacter->GOLD >= 30) {
            newCharacter->EQUIPMENT[1] = shortbow;
            newCharacter->EQUIPMENT[2] = arrow;
            newCharacter->ARROWS_NORMAL = 20;
            newCharacter->GOLD = newCharacter->GOLD - 30;
        } else {
            printf("> NO WEAPONS FOR YOU!\n");
        }

    } else if(strcmp(newCharacter->CLASS[0].NAME, Magicuser.NAME) == 0) {
        printf("> WOULD YOU LIKE TO PURCHASE A DAGGER for 3GP? (y/n)\n> ");

        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s", input);

        if(strcmp(input, "y")==0 && newCharacter->GOLD >= 3) {
            newCharacter->EQUIPMENT[1] = dagger;
            newCharacter->GOLD = newCharacter->GOLD - 3;
        } else {
            printf("> NO DAGGER FOR YOU!\n");
        }
    }

}
