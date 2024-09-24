#include "companion.h"

// Constructor
Companion::Companion(const std::string& name, int level, int health, int maxHealth, int protection, int power, int gold, int medQuantity, Weapon weapon, Armor armor) 
    : Character(name, level, health, maxHealth, protection, power, gold, medQuantity, weapon, armor) {
    // Initialization code specific to Companion can be added here
}

// Destructor
Companion::~Companion() {
    std::cout << name << " (Companion) is being destructed." << std::endl;
    // Cleanup code specific to Companion can be added here
}

// Heal function

// Level up function
void Companion::levelUp() {
    level++;
    maxHealth += 10;
    health = maxHealth;
    power += 5;
    protection += 5;
    std::cout << name << " leveled up! Level: " << level << ", Health: " << health << ", Power: " << power << ", Protection: " << protection << std::endl;
}
