//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


int main()
{

    int selection; // must be declared outside do/while loop

    do
    {
        cout << "1. add" << endl;
        cout << "2. sub" << endl;
        cout << "3. mult" << endl;
        cout << "4. div" << endl;
        cin >> selection;
    } while (selection <= 0 || selection >= 5);

    cout << "You selected " << selection << endl;

    return 0;

}