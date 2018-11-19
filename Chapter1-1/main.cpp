//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    int length;

    cin >> length;

    int *array = new int[length];

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    for (int i = 0; i < length; ++i)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }

    delete [] array;

    return 0;

}