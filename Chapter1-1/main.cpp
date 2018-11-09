//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

using namespace std;

// if use nested namespace -> namespace work1::work::11....

namespace work1
{
    int a =1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a =1;
    void doSomething()
    {
        a += 5;
    }
}


int main()
{

    // '::' scope resolution operator
    work1::a;
    work1::doSomething();

    work2::a;
    work2::doSomething();

    int apple = 5;

    cout << apple << endl;

    {
        int apple2 = 1;

        cout << apple2 << endl;
    }

    cout << apple << endl;

    return 0;

}