//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    int x = 5;
    double d = 123.0;

//    typedef int* pint;
//    pint ptr_x = &x, ptr_y = &x;

    int *ptr_x = &x, *ptr_y = &x;
    double *ptr_d = &d;

    // pointer has data type
    // 포인터도 결국 주소를 저장하는 변수에 불과하다.
    // 포인터도 데이터 타입은 갖고 있음.
    // int type 변수에 대한 포인터
    // 포인터는 사이즈가 정해져있음, 모든 타입에 대해 포인터는 동일한 사이즈
//    int * ptr_x = &x; // '*' is parameter

    // address
    cout << ptr_x << endl;
    cout << ptr_d << endl;
    cout << typeid(ptr_x).name() << endl;

    // de-referencing
    cout << *ptr_x << endl;
    cout << *ptr_d << endl;

    // size check
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;



    return 0;

}