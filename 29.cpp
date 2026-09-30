//29. Write a C++ program to find the greater between two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(a>b)
        cout << a <<" is greater.";
    else if(a<b)
        cout<<b<<" is greater.";
    else
        cout <<"Both numbers are equal.";

    return 0;
}