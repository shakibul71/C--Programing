#include<iostream>
using namespace std;
int main()
{
    int n, i, j, count, total=0;
    cout<<"Enter N: ";
    cin>>n;
    for(i=2; i<=n; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<i<<" ";
            total++;
        }
    }
    cout<<endl<<"Total prime numbers = "<<total;
    return 0;
}