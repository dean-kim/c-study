//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

#define NUM_STU 100000

void doSomething(int stu[])
{
    cout << &stu << endl;
    cout << stu[0] << endl;
    cout << stu[1] << endl;
    cout << stu[2] << endl;
    cout << stu[3] << endl;
    cout << sizeof(stu) << endl; // pointer size

}

int main()
{
    const int num_stu = 5;
//    cin >> num_stu;

    int stu[num_stu] = { 1, 2, 3, 4, 5, };

    cout << &stu << endl;
    cout << stu[0] << endl;
    cout << stu[1] << endl;
    cout << stu[2] << endl;
    cout << stu[3] << endl;
    cout << sizeof(stu) << endl;

    doSomething(stu);

    return 0;

}