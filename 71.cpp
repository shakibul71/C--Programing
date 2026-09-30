#include<iostream>
using namespace std;
int main()
{
    int n, i, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n>0 && sum==n)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not a Perfect Number";
    }
    cout<<endl;
    return 0;
}