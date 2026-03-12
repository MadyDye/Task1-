#ifndef NEWFRACTION1_H
#define NEWFRACTION1_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int den = 1);

    void setNumerator(int num);
    void setDenominator(int den);

    int getNumerator() const;
    int getDenominator() const;

    void display() const;
};

// Nonmember functions
Fraction add(const Fraction& f1, const Fraction& f2);
Fraction subtract(const Fraction& f1, const Fraction& f2);
Fraction multiply(const Fraction& f1, const Fraction& f2);
Fraction divide(const Fraction& f1, const Fraction& f2);

#endif
