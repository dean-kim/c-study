//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

int main()
{
    using namespace std;

    unsigned int n = 5u;
    long n2 = 5L;
    double d = 6.0e-10;

    // decimal : 0 1 2 3 4 5 6 7 8 9 10
    // octal: 0 1 2 3 4 5 6 7 10 11 12 13
    // hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

    // decimal
    int x = 12;

    // octal
    int y = 012;
    cout << y << endl;

    // hexa
    int z = 0xF;
    cout << z << endl;

    // binary
    int xx = 0b1010;
    int xxx = 0b101010111111;
    cout << xx << endl;
    cout << xxx << endl;


    return 0;

}