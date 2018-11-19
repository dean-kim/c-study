//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    int length;

    cin >> length;

//    int *array = new int[length];
    // 0으로 초기화
//    int *array = new int[length]();
    // uniform initialization
    // 값을 할당해서 초기화할 때는 사이즈 할당을 잘 생각해야 됨. 초기화하는 사이즈보다는 크게 해야됨.
    int *array = new int[length]{11, 22, 33, 44, 55, 66};

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    for (int i = 0; i < length; ++i)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }

    delete [] array;

    return 0;

}