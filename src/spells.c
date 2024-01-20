#include "../include/all.h"
#include "../include/character.h"

void findSpellPosition(Spell array[][15], int rows, int cols, Spell *target, int *rowIndex, int *colIndex) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (strcmp(array[i][j].NAME, target->NAME) == 0) {
                    *rowIndex = i;
                    *colIndex = j;
                    return; // Found the item, exit the function
                }
            }
        }
    }

void chooseSpells(Character *newCharacter) {
    char input[50];
    
    printf("> CHOOSE ONE OF THESE SPELLS: DETECT MAGIC, HOLD PORTAL, READ MAGIC, READ LANGUAGES,\n> PROTECTION FROM EVIL, LIGHT, CHARM PERSON OR SLEEP.");
    printf("\n> ");
    
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if (strcmp("detectmagic", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_DETECT_MAGIC;
        return;

    } else if(strcmp("holdportal", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_HOLD_PORTAL;
        return;

    } else if(strcmp("readmagic", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_READ_MAGIC;
        return;

    } else if(strcmp("readlanguages", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_READ_LANGUAGES;
        return;

    } else if(strcmp("protectionfromevil", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_PROTECTION_EVIL;
        return;

    } else if(strcmp("light", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_LIGHT;
        return;

    } else if(strcmp("charmperson", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_CHARM_PERSON;
        return;

    } else if(strcmp("sleep", input) == 0 ) {
        newCharacter->SPELL_SLOT[0][0] = SPELL_SLEEP;
        return;

    } else {
        chooseSpells(newCharacter);
    }

}

void castSpell(Character *caster, Character *target, Spell *spell) {
    int level = spell->LEVEL;

    target->HITPOINTS_CURRENT = target->HITPOINTS_CURRENT - spell->DAMAGE;

    int levelIndex;
    int positionIndex;
    findSpellPosition(&caster->SPELL_SLOT[level], 16, 16, spell, &levelIndex, &positionIndex);

    caster->SPELL_SLOT[levelIndex][positionIndex] = VOID;

}

