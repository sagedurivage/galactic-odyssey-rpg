#include "engineer.h"

void Engineer::levelUp() { //gains more protection during level up
    level++;
    maxHealth += 10;
    protection += 7;
    power += 3;
}
