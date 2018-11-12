//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;

    // same result
    // return (x > y) ? y : x;
}

int main()
{

    int x;
    cin >> x;

    if (x > 10)
        ; // null statement -> do nothing
    

    return 0;

}