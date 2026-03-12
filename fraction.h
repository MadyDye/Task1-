# Task1-
fraction.h

#ifndef FRACTION_H
#define FRACTION_H

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

#endif
