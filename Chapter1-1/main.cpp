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

    if (x > 10)
        cout << "A" << endl;
    else if (x == -1)
        return 0; // same result with 'exit(0);'
    else if (x < 0)
        cout << "B" << endl;

    cout << "Hello" << endl;

    return 0;

}