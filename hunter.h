#ifndef HUNTER_H
#define HUNTER_H

#include "character.h"

class Hunter : public Character {
public:
    Hunter(string n, int l, int h, int mh, int pr, int pw, int g, int med, Weapon w, Armor a)
        : Character(n, l, h, mh, pr, pw, g, med, w, a) {}

    void levelUp() override;
};

#endif