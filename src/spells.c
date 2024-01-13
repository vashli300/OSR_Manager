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
    return;
}

void castSpell(Character *caster, Character *target, Spell *spell) {
    int level = spell->LEVEL;

    target->HITPOINTS_CURRENT = target->HITPOINTS_CURRENT - spell->DAMAGE;

    int levelIndex;
    int positionIndex;
    findSpellPosition(&caster->SPELL_SLOT[level], 16, 16, spell, &levelIndex, &positionIndex);

    caster->SPELL_SLOT[levelIndex][positionIndex] = VOID;

}

