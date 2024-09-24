#include "gameManager.h"

GameManager::GameManager() : player(nullptr) {}

GameManager::~GameManager() {
    delete player;
}

void GameManager::newGame() {
    printer.printCharCustomization();
    int choice;
    cout << "Choose your class:\n1. Engineer\n2. Hunter\n3. Mystic" << endl;
    cin >> choice;

    string name;
    cout << "Enter your character's name: ";
    cin >> name;

    Weapon defaultWeapon(10, 1, 10);
    Armor defaultArmor(10, 1, 10);

    switch (choice) {
        case 1:
            player = new Engineer(name, 1, 100, 100, 10, 10, 100, 3, defaultWeapon, defaultArmor);
            printer.printClass1();
            cout << "Character created: " << player->getName() << " (Level " << player->getLevel() << ")" << endl;
            break;
        case 2:
            player = new Hunter(name, 1, 100, 100, 10, 10, 100, 3, defaultWeapon, defaultArmor);
            printer.printClass3();
            cout << "Character created: " << player->getName() << " (Level " << player->getLevel() << ")" << endl;
            break;
        case 3:
            player = new Mystic(name, 1, 100, 100, 10, 10, 100, 3, defaultWeapon, defaultArmor);
            printer.printClass2();
            cout << "Character created: " << player->getName() << " (Level " << player->getLevel() << ")" << endl;
            break;
        default:
            cout << "Invalid choice. Starting as Engineer by default." << endl;
            player = new Engineer(name, 1, 100, 100, 10, 10, 100, 3, defaultWeapon, defaultArmor);
            printer.printClass1();
            cout << "Character created: " << player->getName() << " (Level " << player->getLevel() << ")" << endl;
            break;
    }
}

void GameManager::battleSequence(Enemy* enemy) {
    if (player == nullptr) {
        cout << "No player found. Please start a new game first." << endl;
        return;
    }

    while (player->getHealth() > 0 && enemy->getHealth() > 0) {
        cout << "Choose your action:\n1. Attack\n2. Use Medicine" << endl;
        int action;
        cin >> action;

        if (action == 1) {
            // Simulate attack
            int damage = player->getPower() - enemy->getProtection();
            if (damage > 0) {
                enemy->setHealth(enemy->getHealth() - damage);
            }

            // Enemy attacks back
            damage = enemy->getPower() - player->getProtection();
            if (damage > 0) {
                player->setHealth(player->getHealth() - damage);
            }

        } else if (action == 2) {
            if (!player->useMedicine()) {
                cout << "No medicine left!" << endl;
            }
        } else {
            cout << "Invalid action. Try again." << endl;
        }

        cout << player->getName() << " Health: " << player->getHealth() << endl;
        cout << "Enemy Health: " << enemy->getHealth() << endl;
    }

    if (player->getHealth() > 0) {
        cout << "You defeated the enemy!" << endl;
        player->addGold(enemy->dropsGold());
        player->addItem();
        enemy->defeat();   
    } else {
        cout << "You were defeated by the enemy." << endl;
        printer.printDeath();
    }

    delete enemy;
    enemy = nullptr;
}

//unsure
void GameManager::travel(int newLocationIndex) {
    playerMap.curLocation = newLocationIndex;
}