#include "equipment.h"
#include <string.h>

typedef struct Character {
    char NAME[50];
    char RACE[50];
    unsigned long long int EXPERIENCE;
    int LEVEL;
    int HIT_DICE;
    int HITPOINTS_CURRENT;
    int HITPOINTS_MAX;
    Equipment EQUIPMENT[20];
    int ARMOUR_CLASS;
    int GOLD;
    int ELECTRUM;
    int SILVER;
    int PLATINUM;
    int ABILITY_STRENGTH;
    int ABILITY_CONSTITUTION;
    int ABILITY_INTELLIGENCE;
    int ABILITY_WISDOM;
    int ABILITY_DEXTERITY;
    int ABILITY_CHARISMA;
} Character;

Character createCharacter();
