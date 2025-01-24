#include <iostream>
#include "geometry.h"

int main() {
    CCerc circle(5.0);
    CDreptunghi rectangle(4.0, 6.0);
    CPatrat square(4.0);

    std::cout << "Circle Perimeter: " << circle.perimeter() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Square Perimeter: " << square.perimeter() << std::endl;

    return 0;
}
