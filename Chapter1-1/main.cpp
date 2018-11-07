//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{

    int x = 7;
    int y = 4;
    int z = x;
    z += y; // z = z + y, '+' '-' '%' '*' '/' also working

    cout << z << endl;
    cout << x / y << endl;
    cout << float(x) / y << endl;
    cout << x / float(y) << endl;
    cout << float(x) / float(y) << endl;

    // remainder's sign depends on left values's sign
    // it return minus sign
    cout << -5 % 2 << endl;

    // it return plus sign
    cout << 5 % -2 << endl;

    return 0;

}