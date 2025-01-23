#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int natural_sum = 0;
    int even_sum = 0;
    int odd_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        natural_sum += i;
    }
    for (int i = 2; i <= n; i += 2)
    {
        even_sum += i;
    }
    for (int i = 1; i <= n; i += 2)
    {
        odd_sum += i;
    }
    cout << "The sum of first " << n << " natural numbers is " << natural_sum << endl;
    cout << "The sum of first " << n << " odd numbers is " << odd_sum << endl;
    cout << "The sum of first " << n << " even numbers is " << even_sum << endl;
    return 0;
}