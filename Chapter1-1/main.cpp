//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include "add.h"

using namespace std;

#define MY_NUMBER(a, b) ((a > b) ? a : b)

int main()
{

    cout << MY_NUMBER(2, 3) << endl;

    return 0;
}