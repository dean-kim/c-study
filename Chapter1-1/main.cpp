//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{

    for(int i=0, j=0; i < 10; ++i, --j)
    {
        cout << i << " " << j << endl;
    }

    for(int i=0, j=0; (i + j) < 10; ++i, j += 2)
    {
        cout << i << " " << j << endl;
    }

    return 0;

}