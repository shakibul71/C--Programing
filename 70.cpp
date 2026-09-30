#include<iostream>
using namespace std;
int main()
{
    int start, end, i, temp, digit, sum;
    cout<<"Enter starting and ending number: ";
    cin>>start>>end;
    for(i=start; i<=end; i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            digit=temp%10;
            sum=sum+(digit*digit*digit);
            temp=temp/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}