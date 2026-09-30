
#include<iostream>
using namespace std;
int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i;
    cout<<"Enter size of first array: ";
    cin>>n1;
    cout<<"Enter "<<n1<<" elements: ";
    for(i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array: ";
    cin>>n2;
    cout<<"Enter "<<n2<<" elements: ";
    for(i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    for(i=0; i<n1; i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0; i<n2; i++)
    {
        arr3[n1+i]=arr2[i];
    }
    cout<<"Merged array: ";
    for(i=0; i<n1+n2; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}