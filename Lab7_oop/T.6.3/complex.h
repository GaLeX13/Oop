#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0);
    double module() const;
    bool operator<(const Complex& other);
    void display();
};

#endif
