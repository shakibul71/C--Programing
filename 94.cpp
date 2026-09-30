
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
    cout<<"Duplicate elements: ";
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}