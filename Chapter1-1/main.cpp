//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{

    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        BANANA,
        APPLE,
    };

    Color color1 = Color::RED;
    Color color2 = Color::BLUE;

    Fruit fruit = Fruit::BANANA;

//    if (color == fruit)
//        cout << "Color is fruit ? " << endl;

    if (color1 == color2)
        cout << "Same color " << endl;
    else
        cout << "Different color" << endl;

    return 0;

}