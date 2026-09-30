
#include<iostream>
using namespace std;
int main()
{
    int n,temp,digit,fact,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        digit=n%10;
        fact=1;

        for(int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(temp>0 && sum==temp)
    {
        cout<<"Strong Number";
    }
    else
    {
        cout<<"Not a Strong Number";
    }
    cout<<endl;
    return 0;
}