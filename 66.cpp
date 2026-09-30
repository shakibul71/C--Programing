#include<iostream>
using namespace std;
int main()
{
    int base, power, result=1, i;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    for(i=1; i<=power; i++)
    {
        result=result*base;
    }
    cout<<"Result = "<<result;
    return 0;
}