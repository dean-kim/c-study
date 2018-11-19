//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

struct MyStruct
{
    int array[5] = { 9, 7 ,5, 3, 1};
};

void doSomething(MyStruct *ms)
{
    cout << sizeof((*ms).array) << endl;
}

// void printArray(int *array) -> same result
void printArray(int array[])
{
    cout << sizeof(array) << endl; // 8, because of array recognize as pointer
    cout << *array << endl;

    *array = 100;
}

int main()
{

    MyStruct ms;

    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;

    doSomething(&ms);

    char name[] = "JackJack";

    cout << name << endl;
    cout << &name[0] << endl;

    // de-referencing
    cout << *name << endl;

    return 0;

}