#include <stdbool.h>


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
//Equipment helmet;
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

void chooseArmour();
void chooseWeapon();
