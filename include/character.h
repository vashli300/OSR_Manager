#include "all.h"
#include "equipment.h"
#include "species-handler.h"
#include "class-handler.h"
#include "dice.h"

typedef struct Character {
    char NAME[15];
    Species SPECIES;
    Class CLASS;
    unsigned long long int EXPERIENCE;
    unsigned int LEVEL_FIGHTER;
    unsigned int LEVEL_MAGIC_USER;
    unsigned int LEVEL_CLERIC;
    unsigned int HIT_DICE;
    int HITPOINTS_CURRENT;
    unsigned long int HITPOINTS_MAX;
    Equipment EQUIPMENT[20];
    unsigned int ARROWS_NORMAL;
    unsigned int ARROWS_MAGIC;
    int ARMOUR_CLASS;
    unsigned int GOLD;
    unsigned int ELECTRUM;
    unsigned int SILVER;
    unsigned int PLATINUM;
    unsigned int ABILITY_STRENGTH;
    unsigned int ABILITY_CONSTITUTION;
    unsigned int ABILITY_INTELLIGENCE;
    unsigned int ABILITY_WISDOM;
    unsigned int ABILITY_DEXTERITY;
    unsigned int ABILITY_CHARISMA;
} Character;

Character createCharacter();


void chooseName();
void chooseOtherEquipment();
void saveToText();
