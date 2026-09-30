
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i, n, even = 0, odd = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements in the array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;
    return 0;
}