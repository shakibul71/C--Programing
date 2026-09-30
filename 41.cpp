
#include<iostream>
using namespace std;
int main()
{
    float salary, tax;
    cout<<"Enter salary: ";
    cin>>salary;
    if(salary<=50000)
        tax=0;
else if(salary<=100000)
        tax=salary*10/100;
    else if(salary<=200000)
        tax=salary*20/100;
    else
        tax=salary*30/100;

    cout<<"Income Tax = "<<tax;

    return 0;
}