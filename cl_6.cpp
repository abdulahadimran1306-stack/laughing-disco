#include <iostream>
using namespace std;

int main ()
{
    int naturalNums[5];

    for (int x = 0; x < 5; x++)
    {
        naturalNums[x] = x + 1;
    }
    int sum = naturalNums[0] + naturalNums[1] + naturalNums[2] + naturalNums[3] + naturalNums[4];
    int average = sum / 5;

    cout << "The Sum of the first 5 natural numbers is: " << sum << endl;
    cout << "The Average of the first 5 natural numbers is: " << average << endl;

    return 0;
}