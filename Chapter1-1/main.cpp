//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include "add.h"


namespace MySpace1
{
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

int doSomething(int a, int b)
{
    return a * b;
}


using namespace std;


int main()
{
    cout << MySpace1::doSomething(1, 2) << endl;

    cout << doSomething(1, 2) << endl;

    return 0;
}