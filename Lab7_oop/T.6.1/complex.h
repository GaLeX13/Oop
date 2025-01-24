#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0);
    Complex operator+(const Complex& other);
    Complex operator^(int power);
    double operator~();
    void display();
};

#endif
