#include "equipment.h"
#include <string.h>
#include "species-handler.h"

typedef struct Character {
    char NAME[15];
    Species SPECIES;
    char CLASS[12];
    unsigned long long int EXPERIENCE;
    int LEVEL_FIGHTER;
    int LEVEL_MAGIC_USER;
    int LEVEL_CLERIC;
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
void chooseClass();
void chooseArmour();
void chooseWeapon();
void chooseName();
void chooseSpecies();
void chooseOtherEquipment();
void saveToText();
