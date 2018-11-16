//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    int array[5] = { 9, 7 ,5, 3, 1};

    char name[] = "JackJack";

    int *ptr = array;

    cout << array << endl;
    cout << name << endl;
    cout << ptr << endl;
    cout << &array[0] << endl;
    cout << &name[0] << endl;

    // de-referencing
    cout << *array << endl;
    cout << *name << endl;
    cout << *ptr << endl;

    return 0;

}