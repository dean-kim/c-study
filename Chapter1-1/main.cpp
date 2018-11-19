//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

//    int array[1000000]; // 정적인 메모리는 stack, 동적인 메모리는 heap.

    // 아래의 new로 선언하는 것과 같은 효과
//    int var;
//    var = 7;

    // 주소를 반납, 4바이트(int size)에 맞춰서 os에게서 메모리르 받아오고 우리에게 주소를 알려줌. 그렇기에 포인터(int 타입)로 받아줘야함.
//    int *ptr = new int;

    // 위에서 받은 메모리 주소에 역참조(de-referencing)로 값을 할당함.
//    *ptr = 7;

    // 위의 2줄을 한 번에 초기화할 수도 있음.
    int *ptr = new int{ 7 };

    cout << ptr << endl;
    cout << *ptr << endl;

    // os에 메모리를 돌려줌
    delete ptr;
    ptr = nullptr;

    cout << "After delete" << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;

}