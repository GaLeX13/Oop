#include "habitat.h"
#include <iostream>

void CIepure::readData() {
    std::cout << "Enter rabbit name, diet, daily food (kg), and minimum area: ";
    std::cin >> name >> diet >> dailyFood >> minArea;
}

void CIepure::writeData() const {
    std::cout << "Rabbit: " << name << ", Diet: " << diet << ", Daily Food: " 
              << dailyFood << "kg, Min Area: " << minArea << "m^2\n";
}

void CVulpe::readData() {
    std::cout << "Enter fox name, diet, daily food (kg), max temperature, and type: ";
    std::cin >> name >> diet >> dailyFood >> maxTemp >> type;
}

void CVulpe::writeData() const {
    std::cout << "Fox: " << name << ", Diet: " << diet << ", Daily Food: " 
              << dailyFood << "kg, Max Temp: " << maxTemp 
              << "°C, Type: " << type << "\n";
}
