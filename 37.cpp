

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter four numbers:";
    cin>>a>>b>>c>>d;
    if(a>=b && a>=c && a>=d)
        cout<<a<<" is the largest.";
    else if(b>=a && b>=c && b>=d)
        cout<<b<<" is the largest.";
    else if(c>=a && c>=b && c>=d)
        cout<<c<<" is the largest.";
    else
        cout<<d<<" is the largest.";
    return 0;
}