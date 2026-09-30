#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 0; j < rows - i; j++)
            cout << " ";
        int c = 1;
        for(int k = 1; k <= i; k++)
        {
            cout << c << " ";
            c = c * (i - k) / k;
        }
        cout << endl;
    }
    return 0;
}