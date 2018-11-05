//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

int main()
{
    int x = 2; // x is a variable, 2 is a literal.
    int y = (x > 0) ? 1 : 2; // 삼항 연산자 = 조건 ? 참 : 거짓

    cout << y << endl;

    cout << 1 + 2 << endl; // "1 + 2" is a expression

    cout << x + 2 << endl; // "+" is a operator, "x, 2" is a operand

    cout << -x << endl; // 단항 연산자

    cout << x << 1 + 2 << &x << endl; // 이항 연산자

    cout << "Hello World" << endl;

    return 0;
}