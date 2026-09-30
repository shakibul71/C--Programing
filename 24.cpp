#include <iostream>
using namespace std;
int main()
{
    float units, rate, bill;

    cout << "Enter units consumed: ";
    cin >> units;

    cout << "Enter rate per unit: ";
    cin >> rate;

    bill = units * rate;

    cout << "Electricity Bill = " << bill;

    return 0;
}