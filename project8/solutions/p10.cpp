#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine(int hp) : horsepower(hp) {}
};

class Car {
public:
    Engine engine;

    Car(int hp) : engine(hp) {}

    void showHorsepower() {
        cout << "Horsepower: " << engine.horsepower << endl;
    }
};

int main() {
    Car car(200);
    car.showHorsepower();
    return 0;
}
