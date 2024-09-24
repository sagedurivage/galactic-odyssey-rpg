#include "equipment.h"
#include <string>

int Equipment::getLevel() const {
    return level;
}

int Equipment::getEffect() const {
    return effect;
}

void Equipment::upgrade() {
    level++;
    effect += 10;
}

int Weapon::getAttackRating() const {
    return damage;
}

void Weapon::setAttackRating(int amount) {
    damage = amount;
}

void Weapon::upgrade() {
    Equipment::upgrade();
    damage += 5;
}

int Armor::getArmorRating() const {
    return defense;
}

void Armor::setArmorRating(int amount) {
    defense = amount;
}

void Armor::upgrade() {
    Equipment::upgrade();
    defense += 5;
}
