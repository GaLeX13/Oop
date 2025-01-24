#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Wheel {
    string type;
public:
    Wheel(string type) : type(type) {}
    string getType() { return type; }
};

class Hummer {
    vector<Wheel> wheels;
public:
    Hummer() {
        for (int i = 0; i < 4; i++) wheels.push_back(Wheel("Hummer"));
    }
    void replaceWheel(int index, Wheel newWheel) {
        if (index >= 0 && index < wheels.size()) wheels[index] = newWheel;
    }
};

class Carriage {
    vector<Wheel> wheels;
public:
    Carriage() {
        for (int i = 0; i < 4; i++) wheels.push_back(Wheel("Carriage"));
    }
    void replaceWheel(int index, Wheel newWheel) {
        if (index >= 0 && index < wheels.size()) wheels[index] = newWheel;
    }
};

int main() {
    Hummer hummer;
    Carriage carriage;
    hummer.replaceWheel(0, Wheel("New Hummer"));
    carriage.replaceWheel(2, Wheel("New Carriage"));
    return 0;
}
