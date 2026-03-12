/**
 * Description: Fraction class test program
 * Name: Madyson Dye
 * StarID: kh5321fi
 * Due Date: March 12, 2026
 * Instructor: Jie Meichsner
 */

#include <iostream>
#include "newfraction1.h"
using namespace std;

int main() {

    Fraction f1, f2;

    int n,d;

    cout << "Enter the first fraction: numerator denominator\n";
    cin >> n >> d;
    f1.setNumerator(n);
    f1.setDenominator(d);

    cout << "Enter the second fraction: numerator denominator\n";
    cin >> n >> d;
    f2.setNumerator(n);
    f2.setDenominator(d);

    cout << "f1 = ";
    f1.display();
    cout << endl;

    cout << "f2 = ";
    f2.display();
    cout << endl;

    cout << "f1 + f2 = ";
    add(f1,f2).display();
    cout << endl;

    cout << "f1 - f2 = ";
    subtract(f1,f2).display();
    cout << endl;

    cout << "f1 * f2 = ";
    multiply(f1,f2).display();
    cout << endl;

    cout << "f1 / f2 = ";
    divide(f1,f2).display();
    cout << endl;

    return 0;
}
