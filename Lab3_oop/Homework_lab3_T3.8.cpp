#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "introdu a b si c pt. ec.(ax^2+bx+c=0)"<<endl;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    double k = b*b-4*a*c;
    if (k>0) {
        double root1 = (-b+sqrt(k))/(2*a);
        double root2 = (-b-sqrt(k))/(2*a);
        cout <<"Two real solutions=" <<root1<<"and"<<root2<<endl;
    } else if (k==0) {
        double root=-b/(2*a);
        cout << "One real solution: " << root << endl;
    } else {
        cout << "No real solutions." << endl;
    }

    return 0;
}

//exemplu 2 -5 2 = 2 si 0.5