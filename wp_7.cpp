#include <iostream>
using namespace std;

main()
{
    string in;
    char letter;
    int c = 0;
    cout << "Enter a word (without any spaces): ";
    cin >> in;
    cout << "Enter the character you want to check in the given word: ";
    cin >> letter;

    for (int x = 0; in[x] != '\0'; x++)
    {
        if (in[x] == letter)
        {
            cout << "The character \'" << letter << "\' was found in the word \"" << in << "\"" << endl;
            c = 1;
            break;
        }
    }
    if (c != 1)
        cout << "Sorry. The character \'" << letter << "\' was not found in the word \"" << in << "\"" << endl;

    return 0;
}