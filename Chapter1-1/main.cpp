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


int main()
{

    cout << multiplyTwoNumbers(1, 2) << endl;
    cout << addTwoNumbers(3, 4) << endl;
    cout << addTwoNumbers(8, 13) << endl;

    return 0;
}
