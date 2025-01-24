#include <iostream>
using namespace std;
double solveLinearEquation(double a, double b, bool& success) {
    if (a == 0) {
        success = false;
        return 0;
    }
    success = true;
    return -b / a;
}

int main() {
    double a, b;
    cout << "'a' si dupa 'b: ";
    cin >> a >> b;

    bool success;
    double result = solveLinearEquation(a, b, success);

    if (success) {
        cout << "Solution:x="<<result<<endl;
    } else {
        cerr<<"Error:Coefficient'a'cannot be zero."<<endl;
    }

    return 0;
}
