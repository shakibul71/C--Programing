
#include <iostream>
using namespace std;
int main()
{
    int i, j, result = 0, rows = 5;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            result = result + 1;
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}