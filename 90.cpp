
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, positive=0, negative=0;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            positive++;
        else if(arr[i]<0)
            negative++;
    }
    cout<<"Positive elements = "<<positive<<endl;
    cout<<"Negative elements = "<<negative<<endl;
    retur