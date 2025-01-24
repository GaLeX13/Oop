#include <iostream>
#include <cmath>
#include "complex.h"

Complex::Complex(double r, double i) : real(r), imag(i) {}

double Complex::module() const {
    return std::sqrt(real * real + imag * imag);
}

bool Complex::operator<(const Complex& other) {
    return this->module() < other.module();
}

void Complex::display() {
    std::cout << real << " + " << imag << "i" << std::endl;
}
