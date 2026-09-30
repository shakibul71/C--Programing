#include<iostream>
using namespace std;
int main()
{
    int n1, n2, a, b, temp, gcd;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    a=n1;
    b=n2;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    gcd=a;
    cout<<"GCD: "<<gcd;
    return 0;
}