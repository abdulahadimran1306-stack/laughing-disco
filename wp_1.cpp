#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    numbers[0] = 231;
    numbers[1] = 213123;
    numbers[2] = 657;
    numbers[3] = 64;
    numbers[4] = 12312;
    
    cout << "The element in the location \"numbers[0]\" of the Array \"numbers[5]\" is: " << numbers[0] << endl;
    cout << "The element in the location \"numbers[1]\" of the Array \"numbers[5]\" is: " << numbers[1] << endl;
    cout << "The element in the location \"numbers[2]\" of the Array \"numbers[5]\" is: " << numbers[2] << endl;
    cout << "The element in the location \"numbers[3]\" of the Array \"numbers[5]\" is: " << numbers[3] << endl;
    cout << "The element in the location \"numbers[4]\" of the Array \"numbers[5]\" is: " << numbers[4] << endl;
    
    return 0;
}