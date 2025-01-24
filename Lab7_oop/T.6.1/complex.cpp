#include <iostream>
#include <cmath>
#include "complex.h"

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator^(int power) {
    double magnitude = std::pow(std::sqrt(real * real + imag * imag), power);
    double angle = std::atan2(imag, real) * power;
    return Complex(magnitude * std::cos(angle), magnitude * std::sin(angle));
}

double Complex::operator~() {
    return std::sqrt(real * real + imag * imag);
}

void Complex::display() {
    std::cout << real << " + " << imag << "i" << std::endl;
}
