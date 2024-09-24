#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <vector>
#include <string>
using namespace std;

class Equipment {
    private:
        int level;
        int effect;
    public:
        Equipment(int l, int e) : level(l), effect(e) {}
        int getLevel() const;
        int getEffect() const;
        virtual void upgrade() = 0;
};

class Weapon : public Equipment {
private:
    int damage;
public:
    Weapon(int d, int l, int e) : damage(), Equipment(l, e) {}
    int getAttackRating() const;
    void setAttackRating(int amount);
    virtual void upgrade() override;
};

class Armor : public Equipment {
private:
    int defense;
public:
    Armor(int d, int l, int e) : defense(d), Equipment(l, e) {}
    int getArmorRating() const;
    void setArmorRating(int amount);
    void upgrade() override;
};



#endif