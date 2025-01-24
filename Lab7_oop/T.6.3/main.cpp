#include <iostream>
#include "complex.h"

int main() {
    Complex c1(3, 4), c2(5, 12);

    std::cout << "Comparing modules of the complex numbers:" << std::endl;
    c1.display();
    c2.display();
    if (c1 < c2) {
        std::cout << "First number has a smaller module." << std::endl;
    } else {
        std::cout << "Second number has a smaller or equal module." << std::endl;
    }

    return 0;
}
