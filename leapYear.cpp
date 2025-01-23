#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a year: ";
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        cout << n << " is Leap year." << endl;
    } else {
        cout << n << " is Not Leap year." << endl;
    }

    return 0;
}
