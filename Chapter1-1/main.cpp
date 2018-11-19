//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    // memory leak
    while  (true)
    {
        int *ptr = new int;
        cout << ptr << endl;

        delete ptr;
    }

    return 0;

}