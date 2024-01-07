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
    if(strcmp(newCharacter.CLASS[0].NAME, Fighter.NAME) != 0 && strcmp(newCharacter.CLASS[0].NAME, Magicuser.NAME) != 0 && strcmp(newCharacter.CLASS[0].NAME, Cleric.NAME) != 0) {
         chooseClass();
    }
    
    
    printf("> YOUR CHARACTER'S CLASS IS %s. GOOD CHOICE!\n", newCharacter.CLASS[0].NAME);
    printf("> THEY START WITH %ld HITPOINTS.\n", newCharacter.HITPOINTS_MAX);

    printf("> YOU START WITH %d GOLD. CHOOSE SOME EQUIPMENT!\n", newCharacter.GOLD);
    
    chooseArmour();

    chooseWeapon();

    chooseName();

    return newCharacter;
}

void chooseName() {
    printf("> DON'T FORGET - YOUR HERO NEEDS A NAME!\n> ");
    
    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);
    strcpy(newCharacter.NAME, input);

    printf("> FINISHED SETUP FOR %s.", newCharacter.NAME);

}
