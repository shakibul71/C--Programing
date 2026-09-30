

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age>=18)
        cout<<"This person is eligible to vote.";
    else
       cout<<"This person is not eligible to vote.";
    return 0;
}