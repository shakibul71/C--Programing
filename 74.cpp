#include<iostream>
using namespace std;
int main()
{
    int start,end,i,j,n,digit,fact,sum;
    cout<<"Enter range: ";
    cin>>start>>end;
    if(start<1) start=1;
    for(i=start;i<=end;i++)
    {
        n=i;
        sum=0;
        while(n!=0)
        {
            digit=n%10;
            fact=1;

            for(j=1;j<=digit;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            n=n/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}