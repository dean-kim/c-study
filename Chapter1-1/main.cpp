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
    switch (static_cast<int>(color))
    {
        case 0 :
            cout << "Black" << endl;
            break;
        case 1 :
            cout << "White" << endl;
            break;
    }

}

int main()
{
    printColorName(Colors::BLACK);
    printColorName(Colors::WHITE);

//    int x;
//    cin >> x;
//
//    {
//        switch (x)
//        {
//            case 0:
//                cout << "Zero";
//                break;
//            case 1:
//                cout << "One";
//                break;
//            case 2:
//                cout << "Two";
//                break;
//        }
//        cout << endl;
//    }

    return 0;

}