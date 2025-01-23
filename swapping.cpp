#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers:\n";
    cin>>a>>b;
    cout<<"Before swapping,\na="<<a<<" b="<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping,\na="<<a<<" b="<<b<<endl;

    return 0;
}