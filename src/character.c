#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/character.h"
#include "../include/dice.h"

Character createCharacter(Character newCharacter) { 
    
    

    newCharacter.ABILITY_STRENGTH     = roll(3,6);
    newCharacter.ABILITY_CONSTITUTION = roll(3,6);
    newCharacter.ABILITY_INTELLIGENCE = roll(3,6);
    newCharacter.ABILITY_WISDOM       = roll(3,6);
    newCharacter.ABILITY_DEXTERITY    = roll(3,6);
    newCharacter.ABILITY_CHARISMA     = roll(3,6);



    return newCharacter;
}



