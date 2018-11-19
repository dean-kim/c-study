//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;



int main()
{

    int value = 7;
    int *ptr = &value;

    cout << uintptr_t(ptr - 1) << endl;
    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr + 1) << endl;
    cout << uintptr_t(ptr + 2) << endl;

    return 0;

}