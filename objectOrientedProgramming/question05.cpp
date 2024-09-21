#include <iostream>
#include <string>

class Inventory {

private:
    std::string items[];

public:
    void addItem(const std::string&item) {
        this->items = item;
    }

}

class GameCharacter {
protected:
    std::string name;
    int level;
    int health;

public:
    // Constructor
    GameCharacter(std::string charName, int charLevel, int charHealth)
        : name(charName), level(charLevel), health(charHealth) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string &charName) {
        name = charName;
    }

    // Getter for level
    int getLevel() const {
        return level;
    }

    // Setter for level
    void setLevel(int charLevel) {
        level = charLevel;
    }

    // Getter for health
    int getHealth() const {
        return health;
    }

    // Method to decrease health
    void takeDamage(int damage) {
        if (damage > 0) {
            health -= damage;
            if (health < 0) health = 0; // Prevent health from going negative
        }
    }

    // Method to display character info
    virtual void display() const {
        std::cout << "Name: " << name << "\nLevel: " << level << "\nHealth: " << health << std::endl;
    }

    // Virtual method for attack (to be overridden)
    virtual void attack(GameCharacter& target) = 0;
};

class Player : public GameCharacter {
private:
    int experience;

public:
    // Constructor
    Player(std::string playerName, int playerLevel, int playerHealth, int playerExperience)
        : GameCharacter(playerName, playerLevel, playerHealth), experience(playerExperience) {}

    // Getter for experience
    int getExperience() const {
        return experience;
    }

    // Setter for experience
    void setExperience(int playerExperience) {
        experience = playerExperience;
    }

    // Method to gain experience
    void gainExperience(int exp) {
        if (exp > 0) {
            experience += exp;
        }
    }

    // Override attack method
    void attack(GameCharacter& target) override {
        std::cout << name << " attacks " << target.getName() << "!" << std::endl;
        // Implement player attack logic here
        // For example:
        int damage = 20; // Example damage value
        target.takeDamage(damage);
    }

    // Override display method
    void display() const override {
        GameCharacter::display();
        std::cout << "Experience: " << experience << std::endl;
    }
};

class Enemy : public GameCharacter {
private:
    int damage;

public:
    // Constructor
    Enemy(std::string enemyName, int enemyLevel, int enemyHealth, int enemyDamage)
        : GameCharacter(enemyName, enemyLevel, enemyHealth), damage(enemyDamage) {}

    // Getter for damage
    int getDamage() const {
        return damage;
    }

    // Setter for damage
    void setDamage(int enemyDamage) {
        damage = enemyDamage;
    }

    // Override attack method
    void attack(GameCharacter& target) override {
        std::cout << name << " attacks " << target.getName() << "!" << std::endl;
        // Implement enemy attack logic here
        // For example:
        target.takeDamage(damage);
    }

    // Override display method
    void display() const override {
        GameCharacter::display();
        std::cout << "Damage: " << damage << std::endl;
    }
};

int main() {
    // Create Player and Enemy objects
    Player player1("Hero", 1, 100, 0);
    Enemy enemy1("Goblin", 1, 50, 15);

    // Display initial info
    std::cout << "Player Info:" << std::endl;
    player1.display();
    std::cout << "\nEnemy Info:" << std::endl;
    enemy1.display();

    // Player attacks Enemy
    std::cout << "\nPlayer's turn:" << std::endl;
    player1.attack(enemy1);
    enemy1.display();

    // Enemy attacks Player
    std::cout << "\nEnemy's turn:" << std::endl;
    enemy1.attack(player1);
    player1.display();

    return 0;
}
