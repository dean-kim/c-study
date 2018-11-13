//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{
    int my_array[5] = { 1, 2, };

    // same result
    //     int my_array[] = { 1, 2, };
    //     int my_array[]{ 1, 2, };

    cout << my_array[0] <<endl;
    cout << my_array[1] <<endl;
    cout << my_array[2] <<endl;
    cout << my_array[3] <<endl;
    cout << my_array[4] <<endl;

    return 0;

}