//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

enum Color // user defined data types
{
    COLOR_BLACK = -3,
    COLOR_RED,
    COLOR_BLUE = 5,
    COLOR_GREEN,
    COLOR_SKYBLUE,
};

int main()
{

    Color my_color = COLOR_BLACK;

    cout << my_color << " " << COLOR_RED<< " " << COLOR_BLUE<< " " << COLOR_GREEN << endl;

    return 0;

}