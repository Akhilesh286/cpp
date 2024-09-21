#include <iostream>
#include <string>

using namespace std;


class GameCharecter
{

private:
    int level,helth;
    string name;

public:

    // Player(std::string playerName, int playerLevel, int playerHealth)
    //     : name(playerName), level(playerLevel), health(playerHealth) {}

    void set_level (int level)
    {
        this->level = level;
    }
    void set_name (string name)
    {
        this->name = name;
    }
    void increase_helth (int value)
    {
        this->helth = this->helth + value;
    }
    void decrease_helth (int value)
    {
        this->helth = this->helth - value;
    }

    int get_level ()
    {
        return this->level;
    }
    string get_name ()
    {
        return this->name;
    }
    int get_helth ()
    {
        return this->helth;
    }
    virtual void attack(GameCharecter&gc) = 0;
};

class Player :public GameCharecter
{
private:
    int experience;

public:
    void setExperience (int value){
        this->experience = value;
    }
    void gainExperience (int value){
        this->experience = value;
    }
    int getExperience (){
        return this->experience;
    }
    void attack(GameCharecter&gc) override
    {
        gc.decrease_helth(5);
    }

};
class Enemy :public GameCharecter
{
private:
    int damage;

public:
    int getDamage (){ return this->damage; }
    void setDamage (int val){this->damage = val;}
    void attack(GameCharecter&gc) override
    {
        gc.decrease_helth(10);
    }
};

int main() {
    Player gc1;
    Enemy gc2;

    gc1.set_level(10);
    gc1.set_name("basha");
    gc1.increase_helth(100);
    gc1.attack(gc2);

    gc2.set_level(10);
    gc2.set_name("antony");
    gc2.increase_helth(100);

    cout << gc2.get_helth() << endl;
    return 0;
}
