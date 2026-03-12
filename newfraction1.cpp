#include "newfraction1.h"

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

// Arithmetic functions
Fraction add(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator()*f2.getDenominator() +
              f2.getNumerator()*f1.getDenominator();

    int den = f1.getDenominator()*f2.getDenominator();

    return Fraction(num, den);
}

Fraction subtract(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator()*f2.getDenominator() -
              f2.getNumerator()*f1.getDenominator();

    int den = f1.getDenominator()*f2.getDenominator();

    return Fraction(num, den);
}

Fraction multiply(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator()*f2.getNumerator();
    int den = f1.getDenominator()*f2.getDenominator();

    return Fraction(num, den);
}

Fraction divide(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator()*f2.getDenominator();
    int den = f1.getDenominator()*f2.getNumerator();

    return Fraction(num, den);
}
