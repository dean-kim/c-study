//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

    double d1(100 - 99.99); // 0.001
    double d2(10 - 9.99);   // 0.001

    cout << std::setprecision(16) << endl;
    cout << d1 << endl;
    cout << d2 << endl;

    if (d1 == d2)
        cout << "Equal" << endl;
    else
        cout << "Different" << endl;

    cout << d1 - d2 << endl;

    return 0;

}