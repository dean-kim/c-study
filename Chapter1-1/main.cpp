//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>

using namespace std;


int main()
{

    int x = 5;

//    typedef int* pint;
//    pint ptr_x = &x, ptr_y = &x;

    int *ptr_x = &x, *ptr_y = &x;

    // pointer has data type
    // 포인터도 결국 주소를 저장하는 변수에 불과하다.
    // 포인터도 데이터 타입은 갖고 있음.
    // int type 변수에 대한 포인터
//    int * ptr_x = &x; // '*' is parameter

    // address
    cout << ptr_x << endl;

    // de-referencing
    cout << *ptr_x << endl;

    

    return 0;

}