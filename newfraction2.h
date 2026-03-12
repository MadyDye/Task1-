#ifndef NEWFRACTION2_H
#define NEWFRACTION2_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num=0, int den=1);

    int getNumerator() const;
    int getDenominator() const;

    // member operators
    Fraction operator+(const Fraction& f) const;
    Fraction operator-(const Fraction& f) const;

    // friend input
    friend istream& operator>>(istream& in, Fraction& f);
};

// nonmember operators
Fraction operator*(const Fraction& f1, const Fraction& f2);
Fraction operator/(const Fraction& f1, const Fraction& f2);
ostream& operator<<(ostream& out, const Fraction& f);

#endif
