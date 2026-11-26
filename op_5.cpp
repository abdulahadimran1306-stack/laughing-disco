#include <iostream>
using namespace std;

int main ()
{
    
    int n;
    cout << "Enter the amount of numbers you want to enter: ";
    cin >> n;
    int num[n];

    for (int x = 0; x < n; x++)
    {
        cout << "Enter the Number " << x + 1 << ": ";
        cin >> num[x]; 
    }
    for (int x = 0; x < n; x++)
    {
        cout << num[x] << endl;
    }
}