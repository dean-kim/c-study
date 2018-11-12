//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{

    string a("Hello, ");
    string b("World.");
    string hw = a + b; // append

    hw += " I'm good";

    cout << hw << endl;

    return 0;

}