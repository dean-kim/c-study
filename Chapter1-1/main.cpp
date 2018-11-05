//
// Created by KEUNU on 05/11/2018.
//

#include "main.h"
#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf
#include <string>

using namespace std;

int addTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;

    return sum;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
    int sum = num_a * num_b;

    return sum;
}

void printHelloWorld()
{
    cout << "Hello World" << endl;

    return;
}


int main()
{

    int x = 0;

    cout << x << " " << &x << endl;

    {
        int x = 0;

        cout << x << " " << &x << endl;

    }
    return 0;
}
