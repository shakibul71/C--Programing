
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, largest, second, i;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    largest=arr[0];
    second=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest)
        {
            second=arr[i];
        }
    }
    cout<<"Second largest element = "<<second<<endl;
    return 0;
}