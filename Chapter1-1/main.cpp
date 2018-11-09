//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

using namespace std;

int a = 1;

int value = 123;
void doSomething()
{
    // same return global variable / 'static' means declare memory address and initialization only one time
    //static int a = 1;

    ++a;

    cout << a << endl;
}

int main()
{

    doSomething();
    doSomething();

    cout << value << endl;

    int value = 1;

    cout << ::value << endl;
    cout << value << endl;

    return 0;

}