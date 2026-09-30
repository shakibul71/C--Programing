
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Reverse array: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}