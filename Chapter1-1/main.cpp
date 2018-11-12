//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
};

void printColorName(Colors color)
{
//    if (color == Colors::BLACK)
//        cout << "Black" << endl;
//    else if (color == Colors::WHITE)
//        cout << "White" << endl;
//


}

int main()
{
//    printColorName(Colors::BLACK);
    int x;
    cin >> x;

    {
        switch (x)
        {
            case 0:
                cout << "Zero";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
        }
        cout << endl;
    }

    return 0;

}