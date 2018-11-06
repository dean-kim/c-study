//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
//#include <cstdint>

void m_function()
{

}

int main()
{
    // void my_void;
    int i =123;
    float f = 123.456f;

    void *my_void;

    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;

}