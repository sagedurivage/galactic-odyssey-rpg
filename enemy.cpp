#include "enemy.h"

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

// ENEMY STUFF
void Enemy::setGold() {
    srand(420);
    goldQty = rand() % 10 + 1;
}

void Enemy::setMed() {
    srand(69);
    medicineQty = rand() % 3 + 1;
}

int Enemy::dropsGold() {
    return goldQty;
}

int Enemy::dropsMed() {
    return medicineQty;
}

void Enemy::defeat() {
    numDefeats++;
}

int Enemy::getNumDefeats() {
    return numDefeats;
}