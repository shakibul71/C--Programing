#include<iostream>
using namespace std;
int main()
{
    int n, fibo=0, a=0, b=1, i;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<a<<" ";
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return 0;
}