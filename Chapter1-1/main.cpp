//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

    // logical Not
    bool x = true;

    cout << !x << endl;

    // logical And
    bool y = true;
    bool z = false;

    cout << (x && y) << endl;

    // logical OR
    cout << (y || z) << endl;

    // short circuit evaluation
    int a = 2;
    int b = 2;

    if (a == 1 && b++ == 2)
    {
        // do something
    }

    // cout b is 2 because of operator '&&', 'b++' is not working
    cout << b << endl;

    bool c = true;
    bool d = false;

    // De Morgan's Law
    !(c || d);
    !c && !y;

    // XOR
    // false false false
    // false true true
    // true false true
    // true true false

    // Because of c++ does not have XOR operator, if need XOR operator refer below statement.
    if (y != z)
    {
        // do something
    }

    return 0;

}