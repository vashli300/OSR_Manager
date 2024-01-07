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

void cast_detect_magic(int PLAYER_LEVEL);
void cast_hold_portal();
void cast_read_magic();
void cast_read_languages();
void cast_protection_evil();
void cast_light(int PLAYER_LEVEL);
void cast_charm_person(int PLAYER_LEVEL);
void cast_sleep(int PLAYER_LEVEL);

