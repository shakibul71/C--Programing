//28. Write a C++ program to check whether a number is divisible by both 3 and 5.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%3==0 && n%5==0)
        cout<<"The number is divisible by both 3 and 5.";
    else
        cout<<"The number is not divisible by both 3 and 5.";
    return 0;
}