//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include "add.h"

using namespace std;


int main()
{

    // set variable when compile time
    constexpr int my_const(123);

    int number = 121;


    // set variable when run time
    const int special_number(number);

    // declare const valuable must be initialized
    const double gravity{ 9.8 };

    // gravity = 1.2; -> not working

    const int price_per_item = 30;
    int num_item = 12;
    int price = num_item * price_per_item;

    double circum = 2.0 * num_item * constants::pi;

    cout << circum << endl;



    return 0;

}