#include <iostream>
#include "matrix.h"

int main() {
    Matrix<int> intMatrix(2, 2, 1);
    intMatrix.setElement(0, 1, 2);
    intMatrix.setElement(1, 0, 3);

    std::cout << "Original Matrix:" << std::endl;
    intMatrix.display();

    auto poweredMatrix = intMatrix.power(3);
    std::cout << "Matrix raised to power 3:" << std::endl;
    poweredMatrix.display();

    return 0;
}
