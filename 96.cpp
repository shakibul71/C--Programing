
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, count;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Frequency of each element:"<<endl;
    for(int i=0; i<n; i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
            cout<<arr[i]<<" = "<<count<<endl;
        }
    }
    return 0;
}