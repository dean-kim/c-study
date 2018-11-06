//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    float f(3.141592f);  // if 'f' doesn't exist c++ convert float type
    double d;
    long double ld;
    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

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
    cout << posinf << " " << std::isnan(posinf) << endl;
    cout << neginf << " " << std::isnan(neginf) << endl;
    cout << nan << " " << std::isnan(nan) << endl;
    cout << 1.0 << " " << std::isnan(1.0) << endl;

    return 0;

}