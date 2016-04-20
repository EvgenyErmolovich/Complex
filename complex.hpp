//
//  complex.hpp
//  Complex
//
//  Created by Evgeny on 01.04.16.
//  Copyright © 2016 Evgeny. All rights reserved.
//

#ifndef complex_hpp
#define complex_hpp

#include <stdio.h>
#include <iostream>

class Complex
{
public:
    Complex (double re = 0, double im = 0): re(re), im(im){}
    friend std:: ostream& operator << (std:: ostream& , const Complex& );
    friend std:: istream& operator >> (std:: istream& , const Complex& );
    double GetRe() const;
    double GetIm()const;
    void SetRe(double re);
    void SetIm(double im);
    bool operator == (const Complex& )const;
    Complex operator + (const Complex& )const;
    Complex operator - ();
private:
    double re, im;
};
bool operator != (const Complex& , const Complex& );
std:: istream& operator >> (std:: istream& , Complex& );
std:: ostream& operator << (std:: ostream& , const Complex& );
#endif /* complex_hpp */
