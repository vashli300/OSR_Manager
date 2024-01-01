typedef struct Spell {
    char NAME[30];
    bool CLERIC_YES;
    bool MAGICUSER_YES;
    int DURATION;
    int DAMAGE;
    int LEVEL;
    int RANGE;

} Spell;

Spell SPELL_LIGHT;
void light();