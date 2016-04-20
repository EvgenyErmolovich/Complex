//
//  main.cpp
//  Complex
//
//  Created by Evgeny on 01.04.16.
//  Copyright © 2016 Evgeny. All rights reserved.
//

#include <iostream>
#include "complex.hpp"

using namespace std;

int main()
{
    Complex c(2.5,3.7);
    cout << "c = " << c << endl;
    cout << "c.re = " << c.GetRe() << endl;
    cout << "c.im = " << c.GetIm() << endl;
    c.SetIm(7.1);
    cout << "c = " << c << endl;
    cout << "(c == c) = " << (c == c) << endl;
    cout << "(c != c) = " << (c != c) << endl;
    cout << "operator != " << (c!=Complex()) << endl;
    cout << "(c + c) = " << c + c << endl;
    cout << "-c" << (-c) << endl;
    cout << "Enter c: " << endl;
    cin >> c;
    cout << "c = " << c << endl;
    Complex c1 = c;
    cout << "c1 = " << c1 << endl;
    Complex c2(3.3);
    cout << "c2 = " << c2 << endl;
    c2 = c1;
    cout << "c2 = " << c2 << endl;
    cout << c2-c;
    return 0;
}
