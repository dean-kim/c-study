//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

using namespace std;


int main()
{

    // Bitwise Operators
    // << left shift
    // >> right shift
    // ~, &, |, ^

    unsigned int a = 3;

    cout << std::bitset<4>(a) << endl;

    unsigned int b = a << 2;

    cout << std::bitset<4>(b) << " " << b << endl;

    unsigned int c = 1024;

    cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl;
    cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl;
    cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl;
    cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl;

    cout << std::bitset<16>(c) << " " << (c) << endl;
    cout << std::bitset<16>(~c) << " " << (~c) << endl;

    unsigned int e = 0b1100;
    unsigned int f = 0b0110;

    // Bitwise AND
    cout << std::bitset<4>(e & f) << endl;
    // Bitwise OR
    cout << std::bitset<4>(e | f) << endl;
    // Bitwise XOR
    cout << std::bitset<4>(e ^ f) << endl;

    // Possible
    a &= b;

    // Quiz
    // 0110 >> 2 -> decimal
    cout << std::bitset<8>(0b0110 >> 2) << " " << (0b0110 >> 2) << endl;
    // 5 | 12
    cout << std::bitset<8>(5 | 12) << " " << (5 | 12) << endl;
    // 5 & 12
    cout << std::bitset<8>(5 & 12) << " " << (5 & 12) << endl;
    // 5 ^ 12
    cout << std::bitset<8>(5 ^ 12) << " " << (5 ^ 12) << endl;


    return 0;

}