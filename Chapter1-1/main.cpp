//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}

int main()
{
    using namespace std;

    // boolean is number to computer
    bool b1 = true; // copy initialization
    bool b2(false); // direct initialization
    bool b3{ true }; // uniform initialization
    b3 = false;

    cout << std::boolalpha; // true, false out not number
    //cout << std::noboolalpha; // true, false out number

    cout << b3 << endl;
    cout << b1 << endl;
    cout << !b1 << endl;
    cout << !true << endl;
    cout << (true && false) << endl;
    cout << (true && true) << endl;
    cout << (false && false) << endl;
    cout << (false && true) << endl;
    cout << (true || false) << endl;
    cout << (true || true) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    if(false)
    {
        cout << "This is true" << endl;
        cout << "This is true second line" << endl;
    }
    else
    {
        cout << "This is false" << endl;
        cout << "This is false second line" << endl;
    }

    cout << isEqual(1, 1) << endl;
    cout << isEqual(1, 3) << endl;

    if (5)
    {
        cout << "True" << endl;
    } else
        cout << "False" << endl;

    return 0;

}