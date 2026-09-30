
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i, n, min;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements in the array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum element of the array is " << min << endl;
    return 0;
}