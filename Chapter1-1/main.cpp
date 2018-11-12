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

    // print "1" because variable scope
    if (1)
        int x = 5; // -> {} is hiden
    else
        int x = 6;


    return 0;

}