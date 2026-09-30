
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0; i<2*n-1; i++)
    {
        int comp;
        if(i<n)
            comp=2*(n-i)-1;
        else
            comp=2*(i-n+1)+1;
        for(int j=0; j<comp; j++)
            cout<<" ";
        for(int k=0; k<2*n-comp; k++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}