#include <iostream>
#include "sort.h"

int main() {
    int intArr[] = {4, 1, 3, 5, 2};
    char* strArr[] = {"banana", "apple", "cherry", "date"};
    std::complex<double> complexArr[] = { {3, 4}, {1, 2}, {3, 2}, {2, 5} };

    sortArray(intArr, 5);
    sortArray(strArr, 4);
    sortArray(complexArr, 4);

    std::cout << "Sorted integers: ";
    for (int i : intArr) std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "Sorted strings: ";
    for (const char* str : strArr) std::cout << str << " ";
    std::cout << std::endl;

    std::cout << "Sorted complex numbers: ";
    for (const auto& c : complexArr) std::cout << "(" << c.real() << "," << c.imag() << ") ";
    std::cout << std::endl;

    return 0;
}
