
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check grade:";
    cin>>num;
    if(num<0 || num>100)
        cout<<"Wrong Number";
    else if(num>=0 && num<40)
        cout<<"Fail";
    else if(num>=40 && num<45)
        cout<<"D Grade";
    else if(num>=45 && num<50)
        cout<<"C Grade";
    else if(num>=50 && num<55)
        cout << "C+ Grade";
    else if(num>=55 && num<60)
        cout<<"B- Grade";
    else if(num>=60 && num<65)
        cout<<"B Grade";
    else if(num>=65 && num<70)
        cout<<"B+ Grade";
    else if(num>=70 && num<75)
        cout<<"A- Grade";
    else if(num>=75 && num<80)
        cout<<"A Grade";
    else
     cout<<"A+ Grade";

    return 0;
}