
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1;

    f1.setNumerator(3);
    f1.setDenominator(5);

    cout << "Fraction: ";
    f1.display();
    cout << endl;

    cout << "Numerator: " << f1.getNumerator() << endl;
    cout << "Denominator: " << f1.getDenominator() << endl;

    return 0;
}
