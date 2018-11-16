//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

// void printArray(int *array) -> same result
void printArray(int array[])
{
    cout << sizeof(array) << endl; // 8, because of array recognize as pointer
    cout << *array << endl;

    *array = 100;
}

int main()
{

    int array[5] = { 9, 7 ,5, 3, 1};

    char name[] = "JackJack";

    int *ptr = array;

    cout << sizeof(array) << endl;

    cout << sizeof(ptr) << endl;

    cout << array << endl;
    cout << name << endl;
    cout << ptr << endl;
    cout << &array[0] << endl;
    cout << &name[0] << endl;

    // de-referencing
    cout << *array << endl;
    cout << *name << endl;
    cout << *ptr << endl;

    printArray(array);

    cout << array[0] << " " << *array << endl;

    return 0;

}