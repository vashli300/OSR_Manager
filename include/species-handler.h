#include <stdbool.h>

typedef struct Species {
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
