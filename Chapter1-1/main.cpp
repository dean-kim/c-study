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
    double x;

    tryAgain : // label

    cout << "Enter a non-negative number" << endl;

    cin >> x;

    if (x < 0.0)
        goto tryAgain;

    cout << sqrt(x) << endl;

    return 0;

}