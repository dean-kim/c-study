//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

using namespace std;

int g_a = 1;

/*
 int g_x; // external linkage
 static int g_x; // internal linkage
 const int g_x // err

 extern int g_z;
 extern const int g_z;

 int g_y(1);
 static int g_y(1);
 const int g_y(1);

 extern int g_w(1);
 extern const int g_w(1);
 */

// can't access from other cpp file
// static int g_a = 1;

// exteranl linkage -> for access from other cpp file
// forward declaration
// define function in other cpp file
// extern void doSomething();

int value = 123;
void doSomething()
{
    // same return global variable / 'static' means declare memory address and initialization only one time
    //static int a = 1;

    ++g_a;

    cout << g_a << endl;
}

int main()
{

    doSomething();
    doSomething();

    cout << value << endl;

    int value = 1;

    cout << ::value << endl;
    cout << value << endl;

    return 0;

}