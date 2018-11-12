//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

using namespace std;

struct Person // 2 + (2) + 4 + 8 = 14 -> +(2) called padding
{
    short id; // 2 byte
    int age; // 4 byte
    double wage; // 8 byte
};



int main()
{

    Person emp1;

    cout << sizeof(Person) << endl;

    return 0;

}