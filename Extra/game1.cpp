
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Character {
private:
    // Encapsulation: Private attributes cannot be accessed directly from outside the class
    std::string name;
    int health;
    int attackPower;

public:
    // Constructor: Initializes the attributes when an object is created
    Character(std::string charName, int charHealth, int charAttack) {
        name = charName;
        health = charHealth;
        attackPower = charAttack;
    }

    // Getters: Public methods to safely read the private attributes
    std::string getName() const { return name; }
    int getHealth() const { return health; }

    // Public method for object interaction
    void attack(Character &target) {
        // Simple combat logic: target health minus this character's attack power
        target.health -= this->attackPower;
        
        // Prevent health from showing negative numbers
        if (target.health < 0) {
            target.health = 0;
        }

        std::cout << name << " attacks " << target.getName() 
                  << " for " << attackPower << " damage!\n";
        std::cout << target.getName() << " now has " << target.getHealth() << " HP.\n\n";
    }

    // Check if the character is still alive
    bool isAlive() const {
        return health > 0;
    }
};

int main() {
    // Seed the random number generator for turn determination
    std::srand(std::time(0));

    std::cout << "=== WELCOME TO THE FANTASY GLADIATOR ARENA ===\n\n";

    // Creating Objects using the Constructor
    Character player("Gladiator Maximus", 100, 15);
    Character monster("Shadow Orc", 80, 18);

    std::cout << player.getName() << " (HP: " << player.getHealth() << ") vs " 
              << monster.getName() << " (HP: " << monster.getHealth() << ")\n";
    std::cout << "--------------------------------------------------\n\n";

    // Turn tracking (0 for player, 1 for monster)
    int turn = std::rand() % 2; 

    // The Battle Loop: Runs until one character's health hits zero
    while (player.isAlive() && monster.isAlive()) {
        if (turn == 0) {
            player.attack(monster);
            turn = 1; // Switch turn to monster
        } else {
            monster.attack(player);
            turn = 0; // Switch turn to player
        }
        
        // Brief pause to make the text-battle readable
        std::cout << "Press Enter for the next round...";
        std::cin.get();
        std::cout << "\n";
    }

    // Determine and announce the winner
    std::cout << "=== BATTLE OVER ===\n";
    if (player.isAlive()) {
        std::cout << "🏆 Victory! " << player.getName() << " has slain the monster!\n";
    } else {
        std::cout << "💀 Defeat! " << monster.getName() << " has crushed the gladiator!\n";
    }

    return 0;
}
