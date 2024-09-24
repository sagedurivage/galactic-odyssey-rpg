#include "mystic.h"

bool Mystic::useMedicine() {
    if (medQuantity > 0) {
        medQuantity--;
        health += 30; // Mystic has greater health bonus when using Medicine
        if (health > maxHealth) {
            health = maxHealth;
        }
        return true;
    }
    return false;
}

void Mystic::levelUp() { //gains more health and less power and protection during level up
    level++;
    maxHealth += 10;
    power += 4;
    protection += 4;
}
