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

    int outer_count = 1;

    while(outer_count <=5)
    {
        int inner_count = 1;
        while (inner_count <= outer_count)
        {
            cout << inner_count++ << " ";
        }
        cout << endl;
        ++outer_count;
    }

    return 0;

}