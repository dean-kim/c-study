//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
    for (int index = 0; index < length; ++index)
        cout << array[index] << " ";
    cout << endl;
}

int main()
{

    /*              value   index
     3 5 2 1 4        1       3      change 1,3 position
     1 5 2 3 4        2       2      change 5,2 position
     1 2 5 3 4        3       3      change 5,3 position
     1 2 3 5 4        4       4      change 5,4 position
     1 2 3 4 5                       
     */

    const int length = 5;

    int array[length] = { 3, 5, 2, 1, 4 };

//    // swap
//    int temp = array[0];
//    array[0] = array[1];
//    array[1] = temp;

    printArray(array, length);

    for (int startIdx = 0; startIdx < length-1; ++startIdx)
    {
        int smallestIdx = startIdx;
        for (int currIdx = startIdx + 1; currIdx < length; ++currIdx)
        {
            if (array[smallestIdx] > array[currIdx])
            {
                smallestIdx = currIdx;
            }
        }
        // swap two values in the array
        // std:: swap(array[smallestIdx], array[startIdx]);
        {
            int temp = array[smallestIdx];
            array[smallestIdx] = array[startIdx];
            array[startIdx] = temp;
        }
    }

    printArray(array, length);


    return 0;

}