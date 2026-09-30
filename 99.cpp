
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Even elements: ";
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd elements: ";
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}