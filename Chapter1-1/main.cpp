//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

// template


auto add(int x, int y) -> int // trailing
{
    return x + y;
}

int main()
{

    using namespace std;

    // auto must use with initialization
//    auto a; // not working
    auto a = 123;
    auto b = 123.0;
    auto c = 1 + 2.0;
    auto result = add(1, 2);

    return 0;

}