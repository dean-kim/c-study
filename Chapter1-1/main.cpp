//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A'); // "Hello World"

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    // c- style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    // cpp style casting
    cout << char(65) << endl;
    cout << int('A') << endl;

    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    char ch(97);
    cout << ch << endl;
    cout << static_cast<int>(ch) << endl;
    cout << ch << endl;

    cout << sizeof(char) << endl;
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;

    cout << int('\n') << endl;

    cout << "This is 1st line \t 2nd line" << endl;
    cout << "This is 1st line " << endl;
    cout << "This is 2nd line " << endl;

    return 0;

}