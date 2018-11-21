//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    int fixedArray[] = { 1, 2, 3, 4, 5 };

    int *array = new int[3]{ 1, 2, 3 };
    // compile fail
    // int *array = new int[]{ 1, 2, 3, 4, 5 };

    // resizing - 직접적으로 되지는 않음. 더 큰메모리를 받아오고 기존의 배열을 복사한 뒤 요소를 추가해야함.
    
    delete[] array;

    return 0;

}