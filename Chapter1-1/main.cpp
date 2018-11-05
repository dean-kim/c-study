//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

void doSomthing(int x)
{
    x = 123;
    cout << x << endl; // #2
}

int main()
{
    int x = 0;

    cout << x << endl; // #1
    doSomthing(x);
    cout << x << endl; // #3

    return 0;
}