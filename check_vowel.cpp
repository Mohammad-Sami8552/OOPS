#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter an english alphabet letter: ";
    cin >> x;
    if ((x == 'a') || (x == 'A') || (x == 'e') || (x == 'E') || (x == 'i') || (x == 'I') || (x == 'o') || (x == 'O') || (x == 'u') || (x == 'U'))
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }
    return 0;
}