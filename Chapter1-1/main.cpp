//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <iomanip>
#include <limits>


int main()
{
    using namespace std;

    float f(3.141592f);  // if 'f' doesn't exist c++ convert float type
    double d;
    long double ld;

    cout << sizeof(float) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(ld) << endl;
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;
    cout << 31.4e-1 << endl;
    cout << 31.4e-2 << endl;
    cout << 31.4e1 << endl;
    cout << 31.4e+1 << endl;
    cout << 31.4e2 << endl;
    cout << std::setprecision(16) << endl;
    cout << 1.0 / 3.0 << endl;

    return 0;

}