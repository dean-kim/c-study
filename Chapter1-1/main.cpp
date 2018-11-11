//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{

    using namespace std;

    // numeric conversion
    int i = 30000;
    char c = i;

//    cout << static_cast<int>(c) <<endl;

    double d = 0.123456789;
    float f = d;

    cout << std::setprecision(12) << f << endl;
    cout << std::setprecision(12) << d << endl;

    float pi = 3.14;
    int pp = pi;

    cout << std::setprecision(12) << pi << endl;
    cout << std::setprecision(12) << pp << endl;

    // when type conversion, conversion is depends on precedence
    // precedence : int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double
    cout << 5u - 10 << endl;
    cout << 5 - 10 << endl;
    cout << 5u - 10u << endl;


    // 명시적 형변환
    int q = int(4.0);
    // c style casting -> (int)4.0;
    // static_cast<int>(4.0);


    return 0;

}