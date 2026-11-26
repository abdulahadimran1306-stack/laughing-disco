#include <iostream>
using namespace std;

void printReverseArray(int arr[], int n);

main()
{
    system("cls");
    
    int n;
    cout << "Enter the amount of numbers you want to enter: ";
    cin >> n;
    int num[n];

    int x = 0;
    while (x < n)
    {
        cout << "Enter the number " << x + 1 << ": ";
        cin >> num[x];
        x = x + 1;
    }    
    printReverseArray(num, n);

    return 0;
}

void printReverseArray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i = i - 1)
    {
        cout << arr[i] << " ";
    }
}