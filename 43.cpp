
#include<iostream>
using namespace std;
int main()
{
    char operation;
    double n1,n2;

    cout<<"Enter an operator(+,-,*,/):";
    cin>>operation;

    cout<<"Enter two operands:";
    cin>>n1>>n2;

    switch(operation)
    {
        case '+':
            cout<<n1<<"+"<<n2<<"="<<n1+n2;
            break;

        case '-':
            cout<<n1<<"-"<<n2<<"="<<n1-n2;
            break;

        case '*':
            cout<<n1<<"*"<<n2<<"="<<n1*n2;
            break;

        case '/':
            cout<<n1<<"/"<<n2<<"="<<n1/n2;
            break;

        default:
            cout<<"Error! operator is not correct";
    }

    return 0;
}