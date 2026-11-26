#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number);

main()
{
    system("cls");

    int n;
    cout << "Enter the amount of numbers you want to enter: ";
    cin >> n;
    int num[n];

    bool result;
    int x = 0;
    while (x < n)
    {
        cout << "Enter the number " << x + 1 << ": ";
        cin >> num[x];
        result = isAlreadyEntered(num, n, num[x]);
        if (result == true)
        {
            cout << "This number is already entered." << endl;
            continue;
        }
        x = x + 1;
    }

    return 0;
}

bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int x = 0; x < size; x++)
    {
        if (number == arr[x])
        {
            return true;
            break;
        }
        else
            return false;
    }
}