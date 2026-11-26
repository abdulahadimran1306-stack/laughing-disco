#include <iostream>
using namespace std;

int main ()
{
    int n = 5;
    int num[n];

    for (int x = 0; x < 5; x++)
    {
        cout << "Enter the Number " << x + 1 << ": ";
        cin >> num[x]; 
    }
    for (int x = 0; x < 5; x++)
    {
        cout << num[x] << endl;
    }
}