#include "newfraction2.h"

Fraction::Fraction(int num, int den) {
    numerator = num;
    denominator = den;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::operator+(const Fraction& f) const {
    int num = numerator*f.denominator + f.numerator*denominator;
    int den = denominator*f.denominator;
    return Fraction(num,den);
}

Fraction Fraction::operator-(const Fraction& f) const {
    int num = numerator*f.denominator - f.numerator*denominator;
    int den = denominator*f.denominator;
    return Fraction(num,den);
}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.getNumerator()*f2.getNumerator(),
                    f1.getDenominator()*f2.getDenominator());
}

Fraction operator/(const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.getNumerator()*f2.getDenominator(),
                    f1.getDenominator()*f2.getNumerator());
}

ostream& operator<<(ostream& out, const Fraction& f) {
    out << f.getNumerator() << "/" << f.getDenominator();
    return out;
}

istream& operator>>(istream& in, Fraction& f) {
    in >> f.numerator >> f.denominator;
    return in;
}
