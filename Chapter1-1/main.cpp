//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    int int_arr[5] = { 1, 2, 3, 4, 5 };
    char char_arr[] = "Hello World!";
    const char *name = "Jack Jack";

    cout << int_arr << endl;
    cout << char_arr << endl;
    cout << name << endl;

    return 0;

}