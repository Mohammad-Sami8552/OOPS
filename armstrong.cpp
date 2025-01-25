    #include<iostream>
    #include<cmath>
    using namespace std;
    int main()
    {
    string s;
    cout << "Enter num: ";
    cin >> s;
    int n = stol(s);
    int sum = 0;
    for (char& c : s) {
        sum += pow(c - '0', s.size());
    }
    
    if (n == sum) cout << n << " is an Armstrong Number" << endl;
    else cout << n << " is not an Armstrong Number" << endl;
    return 0;
    
}