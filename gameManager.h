#ifndef GAMEMANAGAER_H
#define GAMEMANAGAER_H
#include "character.h"
#include "hunter.h"
#include "mystic.h"
#include "engineer.h"
#include "printScreens.h"
#include "enemy.h"
#include <string>
#include <vector>

//Location simulation
class Location {
    private:
        string name;
        bool isDiscovered;
    public:
        string getName() const;
        void discover();
};

//Map simulation
class Map {
    public:
        Location map[9];
        int curLocation;
        Location getLocation();
};

class GameManager {
    private:
        Print printer;
        Character* player;
        Map playerMap;
    public:
        GameManager();
        ~GameManager();
        void newGame();
        void battleSequence(Enemy* enemy);
        void travel(int newLocationIndex);
};

#endif