//
//  complex.cpp
//  Complex
//
//  Created by Evgeny on 01.04.16.
//  Copyright © 2016 Evgeny. All rights reserved.
//

#include <iostream>

#include "complex.hpp"

double Complex :: GetRe() const
{
    return re;
}
double Complex :: GetIm() const
{
    return im;
}
void Complex :: SetRe(double re)
{
    this -> re = re;
}
void Complex :: SetIm(double im)
{
    this -> im = im;
}
bool Complex :: operator == (const Complex& c2)const
{
    return (re == c2.re) && (im == c2.im);
}
bool operator != (const Complex& c1, const Complex& c2)
{
    return !(c1==c2);
}
Complex Complex :: operator + (const Complex& c2) const
{
    return Complex(re + c2.re, im + c2.im);
}
Complex Complex :: operator - ()
{
    return Complex (-re, -im);
}
std:: istream& operator >> (std:: istream& in, Complex& c)
{
    double a, b;
    in >> a >> b;
    c = Complex(a, b);
    return in;
}
std:: ostream& operator << (std:: ostream& out, const Complex& c)
{
    out << '(' << c.re << " , " << c.im << ')';
    return out;
}

