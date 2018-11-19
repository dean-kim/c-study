//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

const char* getName()
{
    return "Jackjack";
}

int main()
{

//    char name [] = "Jack jack";
    const char *name = getName();
//    const char *name2 = "Jack jack";
    const char *name2 = getName();

    cout << (uintptr_t)name << endl;
    cout << (uintptr_t)name2 << endl;

    return 0;

}