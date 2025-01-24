#ifndef HABITAT_H
#define HABITAT_H

#include <string>

class CAnimal {
protected:
    std::string name;
    std::string diet;
    double dailyFood;
public:
    virtual void readData() = 0;
    virtual void writeData() const = 0;
    virtual ~CAnimal() {}
};

class CAnimalIerbivor : public CAnimal {};

class CAnimalCarnivor : public CAnimal {};

class CIepure : public CAnimalIerbivor {
    double minArea;
public:
    void readData() override;
    void writeData() const override;
};

class CVulpe : public CAnimalCarnivor {
    double maxTemp;
    std::string type;
public:
    void readData() override;
    void writeData() const override;
};

#endif
