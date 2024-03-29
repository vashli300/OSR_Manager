#include "../include/character.h"
#include "../include/dice.h"

void createCharacter() { 
    struct Character newCharacter;
    
    newCharacter.EXPERIENCE = 0;

    newCharacter.ABILITY_STRENGTH     = roll(3,6);
    newCharacter.ABILITY_CONSTITUTION = roll(3,6);
    newCharacter.ABILITY_INTELLIGENCE = roll(3,6);
    newCharacter.ABILITY_WISDOM       = roll(3,6);
    newCharacter.ABILITY_DEXTERITY    = roll(3,6);
    newCharacter.ABILITY_CHARISMA     = roll(3,6);
    newCharacter.GOLD                 = roll(3,6) * 10;

    printf("> YOUR CHARACTER STARTS WITH:\n> STR %d\n> CON %d\n> INT %d\n> WIS %d\n> DEX %d\n> CHA %d\n", 
    
    newCharacter.ABILITY_STRENGTH,  newCharacter.ABILITY_CONSTITUTION, newCharacter.ABILITY_INTELLIGENCE, 
    newCharacter.ABILITY_WISDOM, newCharacter.ABILITY_DEXTERITY,  newCharacter.ABILITY_CHARISMA);

    chooseSpecies(&newCharacter);

    if(strcmp(newCharacter.CLASS[0].NAME, Fighter.NAME) != 0 && strcmp(newCharacter.CLASS[0].NAME, Magicuser.NAME) != 0 && strcmp(newCharacter.CLASS[0].NAME, Cleric.NAME) != 0) {
         chooseClass(&newCharacter);
    }
    
    
    printf("> YOUR CHARACTER'S CLASS IS %s. GOOD CHOICE!\n", newCharacter.CLASS[0].NAME);
    printf("> THEY START WITH %ld HITPOINTS.\n", newCharacter.HITPOINTS_MAX);

    printf("> YOU HAVE %d GOLD. CHOOSE SOME EQUIPMENT!\n", newCharacter.GOLD);
    
    chooseArmour(&newCharacter);

    chooseWeapon(&newCharacter);

    if(strcmp(newCharacter.CLASS[0].NAME, Magicuser.NAME) == 0) {
        chooseSpells(&newCharacter);
    }

    chooseName(&newCharacter);

    //saveToText();

    return;
}

void chooseName(Character *newCharacter) {
    char input[50];
    
    printf("> DON'T FORGET - YOUR HERO NEEDS A NAME!\n> ");

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);
    strcpy(newCharacter->NAME, input);

    printf("> FINISHED SETUP FOR %s.", newCharacter->NAME);

}
