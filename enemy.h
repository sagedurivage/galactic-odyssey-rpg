#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include "character.h"
using namespace std;

class Enemy : public Entity {
    protected:
    int goldQty; // rand num between 1-15
    int medicineQty; // rand num between 1-3
    int numDefeats;

    public:
    Enemy(string n, int l, int h, int mh, int pr, int pw, Weapon w, Armor a)
    :  Entity(n, l, h, mh, pr, pw, w, a) {}

    void setGold();
    void setMed();
    int dropsGold();
    int dropsMed();
    void defeat();
    int getNumDefeats();

};

#endif