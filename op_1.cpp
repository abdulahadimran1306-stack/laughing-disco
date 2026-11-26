#include <iostream>
using namespace std;

main()
{
    string in;
    cout << "Enter a word (without any spaces): ";
    cin >> in;

    for (int x = 0; in[x] != '\0'; x++)
    {
        cout << in[x] << " was found at position " << x + 1 << endl;
    }
    return 0;
}