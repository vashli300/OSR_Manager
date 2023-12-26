#include <stdbool.h>

typedef struct Class {
    char NAME[15];
    bool SPELLS_ALLOWED;
} Class;

Class Fighter;
Class Cleric;
Class Magicuser;

void chooseClass();
