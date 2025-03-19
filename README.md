
# `Galactic Odyssey` *- GO*
<details>
  <summary>
  
  #### *A Terminal-Based Role-Playing Game*
  </summary>

  Created by: [Sage DuRivage](https://github.com/sagedurivage), [Vincent Nguyen](https://github.com/Spudtle), [Mason Lam](https://github.com/masonlam154), [Haoming Shi](https://github.com/BillyBiano)

</details>

## Project Description

### Motivation

The team has an interest in learning more about **game development**, **game design**, and implementing **AGILE methodology** to efficiently manage project development.

### Languages, Tools & Technologies

`C++`
`Visual Studio Code`
`Terminal`

### Input & Output

`Input` Players will enter characters from their keyboard.

`Output` Game screens will display [ascii](https://www.geeksforgeeks.org/what-is-ascii-a-complete-guide-to-generating-ascii-code/#) graphics along with player prompts.

### Features
- [X] **Character Selection** - *Select type, class and name*
- [X] **Character Leveling** - *Player health point capacity and attack power increases with level*
- [ ] **Inventory**<sup>*\**</sup> - *Maintain a storage of medicine that has been bought or scavanged*
- [X] **Interactions** - *Exchange with shopkeep, battle enemies, and use medicine on self*
- [X] **Upgrades** - *Improve protection of armor and damage dealt by weapon*
- [X] **Exploration** - *Discover each location and respective sub-location*
- [X] **Campaign Progression** - *Linear progression with the ability to re-battle enemies*
- [ ] **Companionship**<sup>*\**</sup> - *Provides support during combat*
- [ ] **Savable Game**<sup>*\**</sup> - *Ability to create, update, and delete game files*

<sup>* *development in progress*</sup>

### Game Narrative

#### Prologue: Nova Station

In the bustling starport of **Nova Station**, amidst the hum of starships and the glow of the system's sun, our hero, a daring space explorer, begins their odyssey. Our hero is driven by a thirst for adventure and the desire to uncover the mysteries of the cosmos.
Upon arriving at the starport, our hero is greeted by **Captain Rhea**, a seasoned starship pilot and adventurer. Recognizing our hero's potential, Captain Rhea offers their support. They provide our hero with essential gear and introduces them to **Cosmo**, a versatile robotic companion.

<details>
  <summary>At Nova Station...</summary>

Captain Rhea offers gear upgrades, companion maintenance services, and medicine for a price:
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

  ![rpg_userNavigationDiagram](https://github.com/user-attachments/assets/3f97f9a0-073f-49d3-85ca-bc6e9ffa7aaf)

  ### Screen Layout

  ![rpg_screens](https://github.com/user-attachments/assets/69d2620d-a63d-4728-8487-01f3ee58c543)

</details>

<details open>
  <summary>Navigation Diagram v1.1.0</summary>

  #### Updates

  File saving functionality has been withdrawn to prioritize development of essential functionality--feature methods still included in class diagram as placeholders. The inventory screen is consolidated to the in-game menu alongside other character stats, as the only consumable items are currency and medicine.

  ![userNavigationDiagram_update](https://github.com/user-attachments/assets/b1f2bc5e-d404-47b5-a0b7-3788737a5494)

  ### Screen Layout

  ![screens_update](https://github.com/user-attachments/assets/1c424d4d-faaf-4cb4-b553-12d4f86769e0)

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
  
  ![rpg_classDiagram](https://github.com/user-attachments/assets/7635608c-7c38-4619-ab09-ec0839bbf23f)

</details>

<details open>
  <summary>Class Diagram v1.1.0</summary>

  #### Updates
  
  Classes Task, Inventory, Item, Potion and Player were removed. An Entity class was added to interface for the Character, Enemy and Companion classes. The Character and Enemy classes are interfaces for the 3 character and enemy type classes, respectively. The GameManager class’s association to the Character class was updated to a dependency on the Entity interface, and a dependency was also included on the added Print and Map classes. The Print class is also dependent on the Map class, which is a composition of the Location class. An enumeration LocationType class was added to the Location class. An Equipment class was added to interface for the Weapon and Armor classes.
  
  #### SOLID Design Principles
  
  `Single-Responsibility` - The Print class is only responsible for displaying pre-defined strings in the form of text files to the console, and nothing else. Otherwise, this functionality would have been implemented within the GameManager class, convoluting its purpose.

  `Open-Closed` - Instead of defining how the GameManager class interacts with each Character, Companion and Enemy class the compatibility is just defined for the Entity interface, which can be expanded to interface for additional entities if needed. This update also reduced some, potentially redundant, load on the GameManager class.

  `Interface Segregation` - Each entity of the Entity interface only inherit usable methods, and entity-specific functionality is defined separately. Once a user selects which character type to play as the program is not forced to implement more than just that type class. This segregation maintains cleaner, more organized code and optimizes program performance by eliminating redundant implementation.
  
  ![classDiagram_update](https://github.com/user-attachments/assets/3b21d385-3509-4121-ac4c-ace99b64a0e0)

</details>

## Project Information

<details>
  <summary>Program Screenshots</summary>

  ![screens_ss](https://github.com/user-attachments/assets/734b6672-a63e-4e61-a4d5-617189856614)

</details>

<details open>
  <summary>Installation/Usage Instructions</summary>

  1. Clone this repository. Copy the repository URL and paste it into the command line.
  
  `[git clone https://github.com/sagedurivage/galactic-odyssey-rpg.git`
  
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

###### *[Private repoository](https://github.com/cs100/final-project-vnguy397-mlam059-sduri001) salvaged from auto-delete by owner institution; duplicate maintained here for legacy*
