#include "fraction.h"


Fraction::Fraction(int num, int den) {
    numerator = num;
    denominator = den;
}


void Fraction::setNumerator(int num) {
    numerator = num;
}

void Fraction::setDenominator(int den) {
    denominator = den;
}


int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}


void Fraction::display() const {
    cout << numerator << "/" << denominator;
}
