//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{

    char myString[] = "string";

    cout << sizeof(myString) / sizeof(myString[0]) << endl;

    return 0;

}