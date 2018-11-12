//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

enum Color // user defined data types
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_SKYBLUE,
};

int main()
{

    int color_id = COLOR_RED;
    // not Working
    // Color my_color = color_id;
    // but can casting
    Color my_color = static_cast<Color>(3);

    cout << color_id << endl;
    cout << my_color << endl;

    int in_number;
    cin >> in_number;

    if(in_number == static_cast<Color>(0)) my_color = static_cast<Color>(0);

    cout << my_color << endl;

    string str_input;

    std::getline(cin, str_input);

    if(str_input == "COLOR_BLACK") my_color = static_cast<Color>(0);

    cout << my_color << endl;


    return 0;

}