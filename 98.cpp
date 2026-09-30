
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, smallest, second, i;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    smallest=arr[0];
    second=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            second=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second && arr[i]!=smallest)
        {
            second=arr[i];
        }
    }
    cout<<"Second smallest element = "<<second<<endl;
    return 0;
}