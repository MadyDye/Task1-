#include <iostream>
#include "newfraction2.h"
using namespace std;

int main() {

    Fraction f1, f2;

    cout << "Enter first fraction (numerator denominator): ";
    cin >> f1;

    cout << "Enter second fraction (numerator denominator): ";
    cin >> f2;

    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    cout << "f1 + f2 = " << f1 + f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "f1 * f2 = " << f1 * f2 << endl;
    cout << "f1 / f2 = " << f1 / f2 << endl;

    return 0;
}
