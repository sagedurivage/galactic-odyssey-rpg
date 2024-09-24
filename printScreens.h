#include <iostream>
#include <fstream>

using namespace std;

class Print {
    public:
    void printAscii(string fileName);
    void printStartMenu();
    void printDeath();

    // prints char customization
    void printCharCustomization();
    void printClassInfo();
    void printClass1();
    void printClass2();
    void printClass3();

    // prints space station
    void printSpaceStation();
    void printShop();
    void printCaptainDialogue();

    // prints in game menus
    void printMenu();
    void printHelp();
    void printInv();
    void printEquips();

    // region 1
    void printRegion1();
    // subloc1
    void printMineIntro();
    void printRobotFight();
    // subloc2
    void printCaveIntro();
    void printSpiderFight();
    // subloc3
    void printDerelictIntro();
    void printSkeleFight();

    // region 2
    void printRegion2();
    // subloc1
    void printCore();
    void printCoreFight();
    // subloc2
    void printNursery();
    void printNurseFight();
    // subloc3
    void printWreck();
    void printWreckFight();

/////       FINAL REGION        /////
    void printFinalRegion();
    
    // subloc1
    void printNexus();
    void printNexusFight();
    // subloc2
    void printRift();
    void printRiftFight();
    // subloc3
    void printCitadel();
    void printCitadelFight();

};