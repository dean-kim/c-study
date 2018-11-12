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

    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "both numbers are positive" << endl;
    else if (x > 0 || y > 0)
        cout << "one of the numbers is positive" << endl;
    else
        cout << "Neither number is positive" << endl;

    return 0;

}