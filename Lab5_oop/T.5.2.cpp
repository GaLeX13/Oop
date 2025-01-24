#include <iostream>
using namespace std;

class Form {
public:
    Form() {
        cout << "Form constructor called" << endl;
    }
    ~Form() {
        cout << "Form destructor called" << endl;
    }
};

class Rectangle : public Form {
public:
    Rectangle() {
        cout << "Rectangle constructor called" << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }
};

int main() {
    cout << "Creating Form object:" << endl;
    Form* form = new Form();
    delete form;

    cout << "Creating Rectangle object:" << endl;
    Rectangle* rectangle = new Rectangle();
    delete rectangle;

    return 0;
}
