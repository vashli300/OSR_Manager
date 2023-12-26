#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/character.h"
#include "../include/dice.h"


struct Character newCharacter;

Character createCharacter() { 
    
    newCharacter.EXPERIENCE = 0;

    newCharacter.ABILITY_STRENGTH     = roll(3,6);
    newCharacter.ABILITY_CONSTITUTION = roll(3,6);
    newCharacter.ABILITY_INTELLIGENCE = roll(3,6);
    newCharacter.ABILITY_WISDOM       = roll(3,6);
    newCharacter.ABILITY_DEXTERITY    = roll(3,6);
    newCharacter.ABILITY_CHARISMA     = roll(3,6);
    newCharacter.GOLD          = roll(3,6) * 10;

    printf("> YOUR CHARACTER STARTS WITH:\n> STR %d\n> CON %d\n> INT %d\n> WIS %d\n> DEX %d\n> CHA %d\n", 
    newCharacter.ABILITY_STRENGTH,  newCharacter.ABILITY_CONSTITUTION, newCharacter.ABILITY_INTELLIGENCE, newCharacter.ABILITY_WISDOM, newCharacter.ABILITY_DEXTERITY,  newCharacter.ABILITY_CHARISMA);

    chooseSpecies();

    chooseClass();
    
    printf("> YOUR CHARACTER'S CLASS IS %s. GOOD CHOICE!\n", newCharacter.CLASS);
    printf("> YOUR CHARACTER STARTS WITH %d HITPOINTS.\n", newCharacter.HITPOINTS_MAX);

    printf("> YOU START WITH %d GOLD. CHOOSE SOME EQUIPMENT!\n", newCharacter.GOLD);
    
    chooseArmour();

    return newCharacter;
}

void chooseClass() {
    printf("> PLEASE CHOOSE A CLASS:\n> ");

    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "fighter") == 0) {
        strcpy(newCharacter.CLASS,"Fighter");
        newCharacter.HITPOINTS_MAX = roll(1,6) + 1;
        newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

        newCharacter.LEVEL_FIGHTER = 1;
        newCharacter.LEVEL_CLERIC = 0;
        newCharacter.LEVEL_MAGIC_USER = 0;

    } else if(strcmp(input, "cleric") == 0) {
        strcpy(newCharacter.CLASS,"Cleric");
        newCharacter.HITPOINTS_MAX = roll(1,6);
        newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

        newCharacter.LEVEL_FIGHTER = 0;
        newCharacter.LEVEL_CLERIC = 1;
        newCharacter.LEVEL_MAGIC_USER = 0;

    }else if(strcmp(input, "magicuser") == 0) {
        strcpy(newCharacter.CLASS,"Magic-User");
        newCharacter.HITPOINTS_MAX = roll(1,6);
        newCharacter.HITPOINTS_CURRENT = newCharacter.HITPOINTS_MAX;

        newCharacter.LEVEL_FIGHTER = 0;
        newCharacter.LEVEL_CLERIC = 0;
        newCharacter.LEVEL_MAGIC_USER = 1;

    } else {
        printf("> YOU CAN'T CHOOSE THAT! PLEASE TRY AGAIN\n> ");
        chooseClass();
        return;
    }
}

void chooseArmour() {

    char input[50];


    if(strcmp("Magic-User", newCharacter.CLASS) == 0 ) {
        newCharacter.ARMOUR_CLASS = 7;
        newCharacter.EQUIPMENT[0] = leather_armour;
        newCharacter.GOLD = newCharacter.GOLD - leather_armour.COST;
        return;

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
        }
    }
   
}

void chooseSpecies() {
    printf("> CHOOSE A SPECIES: HUMAN, ELF, DWARF OR HALFLING\n> ");

    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp("human", input) == 0 ) {
        newCharacter.SPECIES = Human;

    } else if(strcmp("elf", input) == 0) {
        newCharacter.SPECIES = Elf;

    } else if(strcmp("dwarf", input) == 0) {
        newCharacter.SPECIES = Dwarf;

    } else if(strcmp("halfling", input) == 0) {
        newCharacter.SPECIES = Halfling;

    } else {
        printf("> YOU CAN'T PLAY AS THAT!\n");
        chooseSpecies();
    }
}

