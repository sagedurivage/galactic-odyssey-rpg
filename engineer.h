#ifndef ENGINEER_H
#define ENGINEER_H

#include "character.h"

class Engineer : public Character {
public:
    Engineer(string n, int l, int h, int mh, int pr, int pw, int g, int med, Weapon w, Armor a)
        : Character(n, l, h, mh, pr, pw, g, med, w, a) {}

    void levelUp() override;
};

#endif