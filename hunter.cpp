#include "hunter.h"

void Hunter::levelUp() { //Gains more power over protection during level up
    level++;
    maxHealth += 10;
    power += 7;
    protection += 3;
}
