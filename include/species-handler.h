#include "all.h"

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

void chooseSpecies();
