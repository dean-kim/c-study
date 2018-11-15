//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{

    char myString[255];

    cin >> myString;

    myString[4] = '\0';

    cout << myString << endl;

    return 0;

}