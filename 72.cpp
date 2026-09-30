#include<iostream>
using namespace std;
int main()
{
    int start,end,i,j,sum;
    cout<<"Enter range: ";
    cin>>start>>end;
    if(start<1) start=1;
    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}