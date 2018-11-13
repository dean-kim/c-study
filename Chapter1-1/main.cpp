//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;


int main()
{
    int one_student_score; // 1 variable
    int student_scores[5]; // 5 int

    one_student_score = 100;

    student_scores[0] = 100; // 1st element
    student_scores[1] = 80; // 2nd element
    student_scores[2] = 90; // 3rd element
    student_scores[3] = 50; // 4th element
    student_scores[4] = 0; // 5th element

    cout << student_scores[0] << endl;
    cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;

    return 0;

}