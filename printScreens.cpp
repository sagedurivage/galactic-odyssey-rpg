#include "printScreens.h"
#include <iostream>
#include <fstream>

using namespace std;

void Print::printAscii(string fileName) {
    string line = "";
    ifstream infs;

    infs.open(fileName);
    if (!infs.is_open()) {
        cout << "Failed to open ascii file" << endl;
        return;
    }

    while (getline(infs, line)) {
        cout << line << endl;
    }

    infs.close();
}

// prints death screen
void Print::printDeath() {
    printAscii("asciiMenus/death.txt");
}

//////      PRINT CHARACTER CLASSES AND INFO      //////
void Print::printStartMenu() {
    printAscii("asciiMenus/startMenu.txt");
}

void Print::printCharCustomization() {
    printAscii("asciiMenus/classes/characterClasses.txt");
}

void Print::printClassInfo() {
    printAscii("asciiMenus/classes/characterInfo.txt");
}

void Print::printClass1() {
    printAscii("asciiMenus/classes/class1.txt");
}

void Print::printClass2() {
    printAscii("asciiMenus/classes/class2.txt");
}

void Print::printClass3() {
    printAscii("asciiMenus/classes/class3.txt");
}

/////       PRINT START LOCATION WITH NPCS       /////
void Print::printSpaceStation() {
    printAscii("asciiMenus/spaceStation/spaceStation.txt");
}

void Print::printShop() {
    printAscii("asciiMenus/spaceStation/cosmoShop.txt");
}

void Print::printCaptainDialogue() {
    printAscii("asciiMenus/spaceStation/captain.txt");
}

/////       PRINT IN-GAME MENUS        /////
void Print::printMenu() {
    printAscii("asciiMenus/inGameMenu/gameMenu.txt");
}

void Print::printHelp() {
    printAscii("asciiMenus/inGameMenu/helpMenu.txt");
}

void Print::printInv() {
    printAscii("asciiMenus/inGameMenu/inventoryMenu.txt");
}

void Print::printEquips() {
    printAscii("asciiMenus/inGameMenu/equippedItems.txt");
}

/////       PRINT REGION 1 STUFF        /////
void Print::printRegion1() {
    printAscii("asciiMenus/region1/regionMap1.txt");
}

// sublocation 1: mines
void Print::printMineIntro() {
    printAscii("asciiMenus/region1/subLoc1/miningOutpost.txt");
}

void Print::printRobotFight() {
    printAscii("asciiMenus/region1/subLoc1/robotFight.txt");
}

// sublocation 2: caves
void Print::printCaveIntro() {
    printAscii("asciiMenus/region1/subLoc2/cavesIntro.txt");
}

void Print::printSpiderFight() {
    printAscii("asciiMenus/region1/subLoc2/spiderFight.txt");
}

// sublocation 3: derelict
void Print::printDerelictIntro() {
    printAscii("asciiMenus/region1/subLoc3/derelictIntro.txt");
}

void Print::printSkeleFight() {
    printAscii("asciiMenus/region1/subLoc3/skeleFight.txt");
}

/////       PRINT REGION 2 STUFF        //////
void Print::printRegion2() {
    printAscii("asciiMenus/region2/region2Map.txt");
}

// subloc1: nebula core
void Print::printCore() {
    printAscii("asciiMenus/region2/core/coreIntro.txt");
}
void Print::printCoreFight() {
    printAscii("asciiMenus/region2/core/coreFight.txt");
}

// subloc2: stellar nursery
void Print::printNursery() {
    printAscii("asciiMenus/region2/nursery/nurseryIntro.txt");
}
void Print::printNurseFight() {
    printAscii("asciiMenus/region2/nursery/nurseryFight.txt");
}

// subloc3: lost wreck
void Print::printWreck() {
    printAscii("asciiMenus/region2/wreck/wreckIntro.txt");
}
void Print::printWreckFight() {
    printAscii("asciiMenus/region2/wreck/wreckFight.txt");
}

/////       PRINT FINAL REGION      /////
void Print::printFinalRegion() {
    printAscii("asciiMenus/finalRegion/finalMap.txt");
}

// subloc1
void Print::printNexus() {
    printAscii("asciiMenus/finalRegion/voidNexus/nexusIntro.txt");
}
void Print::printNexusFight() {
    printAscii("asciiMenus/finalRegion/voidNexus/nexusFight.txt");
}

// subloc2
void Print::printRift() {
    printAscii("asciiMenus/finalRegion/cosmicRift/riftIntro.txt");
}
void Print::printRiftFight() {
    printAscii("asciiMenus/finalRegion/cosmicRift/riftIntro.txt");
}

// subloc3
void Print::printCitadel() {
    printAscii("asciiMenus/finalRegion/citadel/citadelIntro.txt");
}
void Print::printCitadelFight() {
    printAscii("asciiMenus/finalRegion/citadel/citadelFight.txt");
}