#include <iostream>
using namespace std;

int main ()
{
    int sum = 0, num[5];

    for (int x = 0; x < 5; x++)
    {
        cout << "Enter the Number " << x + 1 << ": ";
        cin >> num[x]; 
    }
    for (int x = 0; x < 5; x++)
    {
        sum = sum + num[x];
    }
    cout << "The Sum of the numbers entered is: " << sum;
    return 0;
}