#include <iostream>
using namespace std;

int main()
{
    float basic, allowance, bonus, gross;

    cout << "Enter basic salary: ";
    cin >> basic;

    cout << "Enter allowance: ";
    cin >> allowance;

    cout << "Enter bonus: ";
    cin >> bonus;

    gross = basic + allowance + bonus;

    cout << "Gross Salary = " << gross;

    return 0;
}