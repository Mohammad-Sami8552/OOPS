#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            isPrime=false;
        }
    }
    if(isPrime && n>=2)
    {
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not Prime Number"<<endl;
    }
    return 0;
}
