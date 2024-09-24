#ifndef CHARACTER_H
#define CHARACTER_H
#include "equipment.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Entity {
    protected:
        string name;
        int level;
        int health;
        int maxHealth;
        int protection;
        int power;
        Weapon weapon;
        Armor armor;
    public:
        Entity(string n, int l, int h, int mh, int pr, int pw, Weapon w, Armor a) 
        : name(n), level(l), health(h), maxHealth(mh), protection(pr), power(pw), weapon(w), armor(a) {}
        //getters
        string getName() const;
        int getLevel() const;
        int getHealth() const;
        int getMaxHealth() const;
        int getProtection() const;
        int getPower() const;
        //setters
        void setName(string name);
        void setLevel(int amount);
        void setHealth(int amount);
        void setMaxHealth(int amount);
        void setProtection(int amount);
        void setPower(int amount);
        //methods
        virtual void levelUp() = 0;
        virtual void upgradeWeapon() = 0;
        virtual void upgradeArmor() = 0;
        virtual ~Entity() = default;
};

class Character : public Entity { 
    protected:
        int gold;
        int medQuantity;
    public:
        Character(string n, int l, int h, int mh, int pr, int pw, int g, int med, Weapon w, Armor a)
        : Entity(n, l, h, mh, pr, pw, w, a), gold(g), medQuantity(med) {}
        //getters
        int getGold() const;
        int getMedQuantity() const;
        //setters
        void setGold(int amount);
        void setMedQuantity(int amount);
        void addItem();
        void addGold(int amount);
        bool killEnemy(); //gain experience and potentially trigger levelUp 
        void upgradeWeapon();
        void upgradeArmor();
        virtual bool useMedicine(); //healer gains additional health bonus when using Medicine

};
#endif