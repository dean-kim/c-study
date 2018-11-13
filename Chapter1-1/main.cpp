//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{

    int count(0);

    do
    {
        if (count == 5)
            continue;

        cout << count << endl;
    } while (++ count < 10);
    // while (count < 10) -> this is infinite case

    return 0;

}