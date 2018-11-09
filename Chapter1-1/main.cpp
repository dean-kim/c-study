//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <bitset>

namespace a
{
    int my_var(10);
    int my_a(123);
    int count(123123123);
}

namespace b
{
    int my_var(20);
    int my_b(456);
}

int main()
{

    using namespace std;

//    using std::cout;
//    using std::endl;

    cout << "Hello" << endl;

    {
        using namespace a;
        cout << my_var << endl;
//        cout << count << endl; // duplicated with count in std
    }

    {
        using namespace b;
        cout << b::my_var << endl;
    }

//    cout << my_a << endl;
//    cout << my_b << endl;

    return 0;

}