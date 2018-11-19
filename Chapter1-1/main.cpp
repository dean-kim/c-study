//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;


int main()
{

    // memory leak
    // new, delete는 os에 다녀오기 때문에 느리다. 프로그래밍을 잘 하려면 new, delete를 적절하게 사용할 수 있는 능력이 필요.
    while  (true)
    {
        int *ptr = new int;
        cout << ptr << endl;

        delete ptr;
    }

    return 0;

}