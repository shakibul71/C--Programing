
#include<iostream>
using namespace std;
int main()
{
    int a[5], sum=0;
    float average;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    average=(float)sum/5;
    cout<<"Average = "<<average<<endl;
    return 0;
}