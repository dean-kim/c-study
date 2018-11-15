//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>

using namespace std;


int main()
{

    int x = 5;

    cout << x << endl;
    cout << &x << endl; // & : address-of-operator

    // de-reference operator (*)
    // pointer 는 주소를 저장하는 변수라고 여기자
    cout << *(&x) << endl;


    return 0;

}