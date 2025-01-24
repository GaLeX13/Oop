#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    std::string id;
};

class Car {
public:
    std::string make;
    std::string model;
    std::string licensePlate;
};

class PoliceOfficer {
public:
    std::string badgeNumber;
    std::string name;
};

class TrafficStop {
public:
    Person driver;
    Car stoppedCar;
    PoliceOfficer officer;
    bool validDocuments;

    TrafficStop(const Person& driver, const Car& stoppedCar, const PoliceOfficer& officer)
        : driver(driver), stoppedCar(stoppedCar), officer(officer), validDocuments(false) {}

    void checkDocuments() {
        validDocuments = true;
    }

    void displayInfo() {
        std::cout << "Traffic Stop Information:" << std::endl;
        std::cout << "Driver: " << driver.name << std::endl;
        std::cout << "Car: " << stoppedCar.make << " " << stoppedCar.model << " (" << stoppedCar.licensePlate << ")" << std::endl;
        std::cout << "Police Officer: " << officer.name << " (Badge #: " << officer.badgeNumber << ")" << std::endl;
        std::cout << "Valid Documents: " << (validDocuments ? "Yes" : "No") << std::endl;
    }
};

int main() {
    //date sofer
    Person driver{"Alex Gheorghe", "501122003383432"};
    Car stoppedCar{"dacia", "logan", "DJ77SEF"};
    PoliceOfficer officer{"9191", "Gigi Politistul"};

   
    TrafficStop trafficStop(driver, stoppedCar, officer);

    trafficStop.checkDocuments();

    trafficStop.displayInfo();

    return 0;
}
//T.4.6 A car is stopped by the Police for routine check. Common documents are required. Based on some
//actions, organize classes and data.