#include<iostream>
using namespace std;
int main()
{
    int n, count=0, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
        count++;
    }
    cout<<"Number of digits = "<<count<<endl;
    cout<<"Sum of digits = "<<sum;
    return 0;
}