//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;



int main()
{

    char name [] = "Jack jack";

    const int n_name = sizeof(name) / sizeof(name[0]);

    char *ptr = name;

    for(int i = 0; i < n_name; ++i)
    {
        cout << *(ptr + i);
    }


    return 0;

}