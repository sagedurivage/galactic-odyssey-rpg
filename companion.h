#ifndef COMPANION_H
#define COMPANION_H

#include "character.h"
#include <string>

class Companion : public Character {
public:
    Companion(const std::string& name, int level, int health, int maxHealth, int protection, int power, int gold, int medQuantity, Weapon weapon, Armor armor);
    virtual ~Companion();

    // Implement virtual functions specific to Companion
    void levelUp() override;
    void upgradeWeapon() override;
    void upgradeArmor() override;
};

#endif // COMPANION_H
