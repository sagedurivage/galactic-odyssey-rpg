#ifndef MYSTIC_H
#define MYSTIC_H

#include "character.h"

class Mystic : public Character {
public:
    Mystic(string n, int l, int h, int mh, int pr, int pw, int g, int med, Weapon w, Armor a)
        : Character(n, l, h, mh, pr, pw, g, med, w, a) {}

    bool useMedicine() override;
    void levelUp() override;
};

#endif