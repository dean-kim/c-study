//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    bool bValue = true;
    char chValue = 'A';
    char numCh = 65;
    float fValue = 3.141592f;
    double dValue = 3.141592;
    auto aValue = 3.141592;
    int q(123); // direct initialization
    int b{ 123 }; // uniform initialization - more strict than direct initialization
    int i = 3.141592; // save as 3, called "casting" / copy initialization

    cout << (bValue ? 1 : 0) << endl;
    cout << chValue << endl;
    cout << (int)chValue << endl;
    cout << numCh << endl;
    cout << fValue << endl;
    cout << dValue << endl;
    cout << aValue << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(bValue) << endl;
    cout << q << endl;
    cout << b << endl;

    int j = 3;
    int i = -1;
    int k = 123;
    char a = 'H';

    cout << (uintptr_t) static_cast<void*>(&a) << endl;
    cout << (uintptr_t) static_cast<void*>(&i) << endl;

    return 0;

}