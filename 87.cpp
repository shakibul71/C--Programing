
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i, n, max;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements in the array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum element of the array is " << max << endl;
    return 0;
}