//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    short s = 1;  // 2 bytes = 2 * 8 bits = 16 bits
    int i = 1;
    long l = 1;
    long long ll = 1;
    short maxN = 32768; // overflow
    short minN = -32769;
    short some = 40000;

    cout << sizeof(s) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(l) << endl;
    cout << sizeof(ll) << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;
    cout << maxN << endl;
    cout << minN << endl;
    cout << some << endl;

    return 0;

}