#include<iostream>
using namespace std;
int main()
{
    int n, num, reverse=0, digit;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    while(n != 0)
    {
        digit=n%10;     reverse=reverse*10+digit;
        n=n/10;
    }
    if(num==reverse)
    {
        cout<<"Palindrome Number";
    }
    else
    {
        cout<<"Not a Palindrome Number";
    }
    return 0;
}