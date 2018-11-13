//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

enum StuName
{
    JACK,
    TOM,
    JANE,
    NUM_STU,
};

int main()
{
    int stu_scores[NUM_STU];

    stu_scores[JACK] = 10;
    stu_scores[TOM] = 20;

    // same result int my_array[5] = { 1, 2, }
    //     int my_array[] = { 1, 2, };
    //     int my_array[]{ 1, 2, };

    cout << stu_scores[JACK] << endl;
    cout << stu_scores[TOM] << endl;

    return 0;

}