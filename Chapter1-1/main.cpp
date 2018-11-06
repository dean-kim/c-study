//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include "add.h"

using namespace std;

#define LIKE_APPLE

int main()
{
#ifdef LIKE_APPLE
    cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
    cout << "Orange" << endl;
#endif

    return 0;
}