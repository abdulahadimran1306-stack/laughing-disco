#include <iostream>
using namespace std;

main()
{
    system("cls");
    
    string in;
    cout << "Enter a word (without any spaces): ";
    getline (cin, in);

    int x = 0;
    while (in[x] != '\0')
    {
        x++;
    }

    int ASCII[x];

    for(int i = 0; i < x; i++)
    {
        ASCII[i] = in[i];
        if (ASCII[i] != 32)
        {ASCII[i] = ASCII[i] + 1;}
        if (ASCII[i] == 123) ASCII[i] = 97;
        else if (ASCII[i] == 91) ASCII[i] = 65;

        in[i] = ASCII[i];
    }

    for (int i = 0; i < x; i++)
    {
        cout << in[i];
    }
    return 0;
}