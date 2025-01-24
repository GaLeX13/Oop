#include <iostream>
#include <vector>
#include "habitat.h"

int main() {
    std::vector<CAnimal*> reserve;

    CIepure* rabbit = new CIepure();
    CVulpe* fox = new CVulpe();

    rabbit->readData();
    fox->readData();

    reserve.push_back(rabbit);
    reserve.push_back(fox);

    for (const auto& animal : reserve) {
        animal->writeData();
    }

    for (const auto& animal : reserve) {
        delete animal;
    }

    return 0;
}
