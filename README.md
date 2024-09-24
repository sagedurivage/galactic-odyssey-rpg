
# `Galactic Odyssey` *- GO*

*A Terminal-Based Role-Playing Game created by:* 
[Vincent Nguyen](https://github.com/Spudtle), [Mason Lam](https://github.com/masonlam154), [Sage DuRivage](https://github.com/sduri001), [Haoming Shi](https://github.com/BillyBiano)

## Project Description

### Motivation

The team has an interest in learning more about **game development**, **game design**, and implementing **AGILE methodology** to efficiently manage project development.

### Languages, Tools & Technologies

`C++`
`Visual Studio Code`
`Terminal`

### Input & Output

`Input` Players will enter characters from their keyboard.

`Output` Game screens will display ASCII art graphics along with player prompts.

### Features
- [ ] **Character Creation** - *Select type, class and name*
- [ ] **Character Leveling** - *Player health point capacity and attack power increases with level*
- [ ] **Inventory** - *Maintain a storage of medicine that has been bought or scavanged*
- [ ] **Interactions** - *Exchange with shopkeep, battle enemies, and use medicine on self*
- [ ] **Upgrades** - *Improve protection of armor and damage dealt by weapon*
- [ ] **Exploration** - *Discover each location and respective sub-location*
- [ ] **Campaign Progression** - *Linear progression with the ability to re-battle enemies*
- [ ] **Companionship** - *Provides support during combat*
- [ ] **Savable Game** - *Ability to create, update, and delete game files*

### Game Narrative

#### Prologue: Nova Station

In the bustling starport of **Nova Station**, amidst the hum of starships and the glow of the system's sun, our hero, a daring space explorer, begins their odyssey. Our hero is driven by a thirst for adventure and the desire to uncover the mysteries of the cosmos.
Upon arriving at the starport, our hero is greeted by **Captain Rhea**, a seasoned starship pilot and adventurer. Recognizing our hero's potential, Captain Rhea offers their support. They provide our hero with essential gear and introduces them to **Cosmo**, a versatile robotic companion.

<details>
  <summary>More Details</summary>

In Nova Station, Captain Rhea offers gear upgrades, companion maintenance services, and medicine for a price:
- Upgrade space armor & weapon
- Repair Cosmo the robot
- Receive medicine to regain health points

#### Location 1: Asteroid Belt

The **Asteroid Belt** is a chaotic and dangerous region of space, filled with floating rocks and debris. Hidden within the asteroid field are valuable resources and ancient relics. Our hero and Cosmo must navigate through the treacherous terrain, avoiding collisions and battling hostile forces to uncover the secrets hidden among the asteroids.

- **Sub-location 1a: Mining Outpost**
  - **Enemy:** Rogue Drone - *Repurposed mining robot, armed with lasers*
- **Sub-location 1b: Crystalline Cave**
  - **Enemy:** Crystal Spider - *Native creature with a venomous bite*
- **Sub-location 1c: Derelict Station**
  - **Mini Boss 1:** Space Pirate - *Ruthless scavenger, armed to the teeth*

#### Location 2: Celestial Nebula

The **Celestial Nebula** is a mesmerizing and mysterious region, filled with swirling clouds of gas and cosmic phenomena. Within its depths lie hidden wonders and dangers beyond comprehension. Our hero and Cosmo must brave the celestial storms and navigate through the nebula's shifting mists to uncover its secrets and confront its guardians.

- **Sub-location 2a: Nebula Core**
  - **Enemy:** Nebula Guardian - *Energy being, capable of manipulating nebula energy*
- **Sub-location 2b: Stellar Den**
  - **Enemy:** Nebula Beast - *Creature born of nebula energy with sharp claws*
- **Sub-location 2c: Lost Wreckage**
  - **Mini Boss 2:** Nebula Phantom - *Spectral entity, haunting hosts into psychosis*

#### Location 3: Void Nexus

The **Void Nexus** is the heart of the universe, a place of immense power and unfathomable mysteries. Its vastness is beyond comprehension, and its secrets are guarded by cosmic forces beyond mortal understanding. Our hero and Cosmo must journey to the core, confronting cosmic threats and transcending the boundaries of space and time to uncover the ultimate truth of the universe.

- **Sub-location 3a: Celestial Citadel**
  - **Final Boss:** Cosmic Overlord - *Ancient entity, wielder of cosmic energy*

#### Epilogue: Legacy Among the Stars
Having defeated the Cosmic Overlord and unraveled the mysteries of the Void Nexus, our hero and Cosmo return to Nova Station as heroes. Captain Rhea welcomes them back, proud of their achievements. The universe is vast and full of wonders, and our hero's journey has only just begun, with countless stars and galaxies waiting to be explored.

</details>

## User Interface Specification

### Navigation Diagram

An illustration of how users will navigate from one screen to another, depending on what input is entered. Each screen is represented by a rectangle with a title inside. Each action is represented by text along the path from one screen to another.

<details>
  <summary>Navigation Diagram v1.0.0</summary>

  ![rpg_userNavigationDiagram](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/75c95fc8-746c-48ef-955e-1e0278e58829)

  ### Screen Layout

  ![rpg_screens](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/6215902f-6326-40ff-9214-e4e20c41c6d7)

</details>

<details>
  <summary>Navigation Diagram v1.1.0</summary>

  #### Updates

  File saving functionality has been withdrawn to prioritize development of essential functionality--feature methods still included in class diagram as placeholders. The inventory screen is consolidated to the in-game menu alongside other character stats, as the only consumable items are currency and medicine.

  ![userNavigationDiagram_update](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/20606ca2-56a8-46f1-8927-e44419ac37c9)
  
  ### Screen Layout

  ![screens_update](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/a24b04e7-f907-42ed-bc33-bf2fcb4ee456)

</details>

## Class Diagram

<details>
  <summary>Class Diagram v1.0.0</summary>
  
  ####
  
  The Character class serves as the base for the Player and the Companion, which contains the attributes related to STATs (power, health, protection, item, etc.), the methods used for player actions (travel, attack, etc.), and is composed of Location to track where they are at any time. 
  A player can track EXP, select an enemy to attack, and makes use of the GameManager class to manage their game via save, delete, and load.
  Medicine, weapons, and armor classes are derived from the Item class, in which Item objects are stored in the Shop and Inventory.
  The Enemey class is composed of an item, which will be dropped at random upon defeat.
  The Location class is used to store information for each location consisting of name, tasks, and if it has been discovered.
  Each task pertains to a specific location and has their own condition of completion, which is checked by the complete() method.
  
  ![rpg_classDiagram](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/f2c83fec-4208-4bd5-980c-9e8e626c497c)

</details>

<details>
  <summary>Class Diagram v1.1.0</summary>

  #### Updates
  
  Classes Task, Inventory, Item, Potion and Player were removed. An Entity class was added to interface for the Character, Enemy and Companion classes. The Character and Enemy classes are interfaces for the 3 character and enemy type classes, respectively. The GameManager class’s association to the Character class was updated to a dependency on the Entity interface, and a dependency was also included on the added Print and Map classes. The Print class is also dependent on the Map class, which is a composition of the Location class. An enumeration LocationType class was added to the Location class. An Equipment class was added to interface for the Weapon and Armor classes.
  
  #### SOLID Design Principles
  
  `Single-Responsibility` - The Print class is only responsible for displaying pre-defined strings in the form of text files to the console, and nothing else. Otherwise, this functionality would have been implemented within the GameManager class, convoluting its purpose.

  `Open-Closed` - Instead of defining how the GameManager class interacts with each Character, Companion and Enemy class the compatibility is just defined for the Entity interface, which can be expanded to interface for additional entities if needed. This update also reduced some, potentially redundant, load on the GameManager class.

  `Interface Segregation` - Each entity of the Entity interface only inherit usable methods, and entity-specific functionality is defined separately. Once a user selects which character type to play as the program is not forced to implement more than just that type class. This segregation maintains cleaner, more organized code and optimizes program performance by eliminating redundant implementation.
  
  ![classDiagram_update](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/2aec65c0-425e-43a6-bb8f-2fc244a5ac54)

</details>

## Project Information

<details>
  <summary>Program Screenshots</summary>

  ![screens_ss](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/assets/166184344/29ebc528-74c4-42a8-9b4a-b745c1688a6b)

</details>

<details>
  <summary>Installation/Usage Instructions</summary>

  1. Clone this repository. Copy the repository URL and paste it into the command line.
  
  `git clone https://github.com/cs100/final-project-vnguy397-mlam059-sduri001.git`
  
  2. Change directory to the project folder. Use the `cd` command to change directory to the project folder.
  
  `cd <project folder>`
  
  3. Run the project 

</details>

<details>
  <summary>Testing Procedure</summary>

  1. Our approach was to implement unit tests for each class, using lcov and gcov to ensure complete code coverage and building test executables with make. We also are using Github Actions to support the Continuous Integration of our project.
  
  2. Each team member is responsible for the unit testing of the classes they're developing, respectively.
  
  3. We tested our program with unit tests for each class function. 

</details>

[![CI](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/actions/workflows/main.yaml/badge.svg?branch=master)](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001/actions/workflows/main.yaml)

