#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    if (s2 == s1)
    {
        cout << "Pallindrome Number" << endl;
    }
    else
    {
        cout << "Not pallindrome Number" << endl;
    }

    return 0;
}