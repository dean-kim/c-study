//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;


int main()
{
    int x;
    cin >> x;

    // in switch can variable declare but can not assign or initialization
    switch (x)
    {

        case 0:
            // same declare variable outside of case
            int y;
            cout << y << endl;
            break;
        case 1:
            // y is declare in case 0 but it is same result of declare outside of case
            // so assignment is possible
            y = 5;
            break;

        default:
            cout << "undefined input" << endl;
            break;
    }

    return 0;

}