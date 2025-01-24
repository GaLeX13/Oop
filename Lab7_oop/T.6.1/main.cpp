#include <iostream>
#include "complex.h"

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex sum = c1 + c2;
    Complex power = c1 ^ 2;
    double absValue = ~c1;

    std::cout << "Sum: ";
    sum.display();
    std::cout << "Power: ";
    power.display();
    std::cout << "Absolute Value: " << absValue << std::endl;

    return 0;
}
