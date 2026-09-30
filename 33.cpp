

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year:";
    cin>>year;
    if(year%400==0 || (year % 4 == 0 && year % 100 != 0))
        cout<<"This is a leap year.";
    else
        cout<<"This is not a leap year.";
    return 0;
}