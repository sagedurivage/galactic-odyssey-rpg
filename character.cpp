#include "character.h"
#include <string>
#include <iostream>
using namespace std;

//Entity getters
string Entity::getName() const{
    return name;
}
int Entity::getLevel() const {
    return level;
}
int Entity::getHealth() const {
    return health;
}
int Entity::getProtection() const {
    return protection;
}
int Entity::getPower() const {
    return power;
}
int Entity::getMaxHealth() const {
    return maxHealth;
}
//Entity Setters
void Entity::setMaxHealth(int amount){
    maxHealth = amount;
}
void Entity::setName(string name){
    this->name = name;
}
void Entity::setLevel(int amount){
    level = amount;
}
void Entity::setHealth(int amount){
    health = amount;
}
void Entity::setProtection(int amount){
    protection = amount;
}
void Entity::setPower(int amount){
    power = amount;
}
//Character getters
int Character::getGold() const {
    return gold;
}
int Character::getMedQuantity() const {
    return medQuantity;
}

//Character setters
void Character::setGold(int amount) {
    gold = amount;
}
void Character::setMedQuantity(int amount) {
    medQuantity = amount;
}

//Character Methods
void Character::addItem() {
    medQuantity += 1;
}

void Character::addGold(int amount) {
    gold += amount;
}

bool Character::useMedicine() { //if no medicine available, return false. Else, add health bonus to health without exceeding maxHealth
    if (medQuantity > 0) {
        medQuantity--;
        health += 10;
        if (health > maxHealth) {
            health = maxHealth;
        }
        return true;
    }
    return false;
}



