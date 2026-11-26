#include <iostream>
using namespace std;

main()
{
    string in;
    cout << "Enter a word (without any spaces): ";
    cin >> in;

    int x = 0;
    while (in[x] != '\0')
    {
        x++;
    }

    char reverse[x];

    for (int i = x, a = 0; i >= 0; i = i - 1, a = a + 1)
    {
        reverse[a] = in[i];
    }
    for (int f = 0; f <= x; f++)
    {
        cout << reverse[f];
    }
    return 0;
}