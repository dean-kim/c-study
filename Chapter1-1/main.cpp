//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>

using namespace std;


int main()
{

    char source[] = "Copy this!";

    char dest[50];

    strcpy(dest, source);

    cout << source << endl;
    cout << dest << endl;

    return 0;

}