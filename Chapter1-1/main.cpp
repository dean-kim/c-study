//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>

using namespace std;

// Pseudo Random Number Generator
unsigned int PRNG()
{
    // seed number
    static unsigned int seed = 5523;

    seed = 8253729 * seed + 2396403;

    return seed % 32768;
}

int main()
{
    for (int count = 1; count <= 100; ++count)
    {
        cout << PRNG() << "\t";

        if (count % 5 == 0) cout << endl;
    }

    return 0;

}