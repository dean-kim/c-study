//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

struct Rect
{
    int length;
    int width;
};

int main()
{
    cout << sizeof(Rect) << endl;

    Rect rect_arr[10];

    cout << sizeof(rect_arr) << endl;

    rect_arr[0].length = 2;
    rect_arr[0].width = 2;

    return 0;

}