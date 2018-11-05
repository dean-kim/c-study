//
// Created by KEUNU on 05/11/2018.
//

#include "main.h"
#include <iostream>

int main()
{
    int x = 1;
    x = x + 2;
    std::cout << x << std::endl; // #1

    int y = x;
    std::cout << y << std::endl; // #2

    // is (x + y) l-value or r-value?
    std::cout << x + y << std::endl; // #3

    std::cout << x << std::endl; // #4

    int z;
    std::cout << z << std::endl; // #5

    return 0;
}
