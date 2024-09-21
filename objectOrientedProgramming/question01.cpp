#include <iostream>
#include <string>

using namespace std;


class player
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
    void set_helth (int helth)
    {
        this->helth = helth;
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
};


int main() {
    player p;
    p.set_name("ana de arams");
    cout << p.get_name() << endl;
    return 0;
}
