//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{

    // comma operator
    int x = 3;
    int y = 10;
    int z = (++x, ++y);
    int zz = (x++, x + y);

    cout << x << " " << y << " " << z << endl;
    cout << zz << endl;

    // conditional operator (arithmetric if)
    bool onSale = true;
//    if(onSale)
//        price = 10;
//    else
//        price = 100;
//

    // same result above if statement
    const int price = (onSale == true)? 10 : 100;


    cout << price << endl;


    return 0;

}