#include "all.h"

typedef struct Class {
    char NAME[15];
    bool SPELLS_ALLOWED;
} Class;

Class Fighter;
Class Cleric;
Class Magicuser;

typedef struct Species {
    char NAME[15];
    int MAX_LEVEL_FIGHTER;
    int MAX_LEVEL_CLERIC;
    int MAX_LEVEL_MAGIC_USER;
    bool CLERIC_ALLOWED;
    bool MAGIC_USER_ALLOWED;
} Species;

Species Human;
Species Elf;
Species Dwarf;
Species Halfling;

typedef struct Equipment {
    char TYPE[50];
    char DESCRIPTION[50];
    int COST;
    bool FIGHTER_YES;
    bool CLERIC_YES;
    bool MAGICUSER_YES;
} Equipment;

//weapons
Equipment dagger;
Equipment hand_axe;
Equipment mace;
Equipment sword;
Equipment battle_axe;
Equipment morning_star;
Equipment flail;
Equipment spear;
Equipment polearm;
Equipment halberd;
Equipment longsword;
Equipment shortbow;
Equipment longbow;
Equipment crossbow;
Equipment arrow;
Equipment quiver;
Equipment silver_arrow;

// horse stuff
Equipment mule;
Equipment horse;
Equipment saddle;
Equipment saddle_bags;

// vehicles
Equipment cart;
Equipment wagon;
Equipment raft;

//boats
Equipment small_boat;
Equipment small_merchant_ship;
Equipment large_merchant_ship;
Equipment small_galley;
Equipment large_galley;

//armour
Equipment leather_armour;
Equipment chain_armour;
Equipment plate_armour;
Equipment helmet;
Equipment shield;

// misc
Equipment rope;
Equipment spike;
Equipment small_sack;
Equipment large_sack;
Equipment torches;
Equipment lantern;
Equipment mirror;
Equipment cross;
Equipment rations;

typedef struct Spell {
    char NAME[30];
    bool CLERIC_YES;
    bool MAGICUSER_YES;
    int DURATION;
    int DAMAGE;
    int LEVEL;
    int RANGE;
} Spell;

//1st level
Spell SPELL_DETECT_MAGIC;
Spell SPELL_HOLD_PORTAL;
Spell SPELL_READ_MAGIC;
Spell SPELL_READ_LANGUAGES;
Spell SPELL_PROTECTION_EVIL;
Spell SPELL_LIGHT;
Spell SPELL_CHARM_PERSON;
Spell SPELL_SLEEP;

//Placeholder
Spell VOID;

typedef struct Character {
    char NAME[15];
    Species SPECIES;
    Class CLASS[3];
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
    Spell SPELL_SLOT[15][15];
    int NUMBER_SPELLS;
    
} Character;

/*Functions*/

void createCharacter();

void chooseName();
void chooseOtherEquipment();
//void saveToText();
void multiclassSetup(Character *newCharacter);


void chooseArmour(Character *newCharacter);
void chooseWeapon(Character *newCharacter);

void castSpell(Character *caster, Character *target, Spell *spell);
void findSpellPosition(Spell array[][15], int rows, int cols, Spell *target, int *rowIndex, int *colIndex);

void chooseSpells(Character *newCharacter);

void chooseSpecies(Character *newCharacter);

void chooseClass(Character *newCharacter);
