#include<iostream>
using namespace std;
int main()
{
    int n, num, digit, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }
    return 0;
}