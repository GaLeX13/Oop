#include <iostream>
using namespace std;
class Rectangle {
public:
    Rectangle(double length,double width):length(length),width(width){}
    double calculateArea() {
        return length * width;
    }
    double calculatePerimeter() {
        return 2 * (length + width);
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }
private:
    double length;
    double width;
};

int main() {
    Rectangle rectangle1(5, 10);  //aici se modifica valorile
    Rectangle rectangle2(3, 8);
    double area1 = rectangle1.calculateArea();
    double area2 = rectangle2.calculateArea();
    if (area1 > area2) {
        cout << "dr1 > dr2 (arie)" << endl;
    } else if (area1 < area2) {
        cout << "dr2 > dr1 (arie)" << endl;
    } else {
        cout << "dr1 = dr2 (arie)" << endl;
    }
    double perimeter1 = rectangle1.calculatePerimeter();
    double perimeter2 = rectangle2.calculatePerimeter();

    if (perimeter1 > perimeter2) {
        cout << "dr1 > dr2 (perimetru) " << endl;
    } else if (perimeter1 < perimeter2) {
        cout << "dr2 > dr1 (perimetru)" << endl;
    } else {
        cout << "dr1 = dr2 (perimetru)" << endl;
    }

    return 0;
}
