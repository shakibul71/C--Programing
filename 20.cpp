#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
  cin >> principal;
  cout << "Enter annual interest rate (%): ";
    cin >> rate;
  cout << "Enter time (in years): ";
    cin >> time;

    double amount = principal * pow(1 + rate / 100.0, time);
double compoundInterest = amount - principal;

    cout << "Amount after " << time << " years = " << amount << endl;
    cout << "Compound Interest = " << compoundInterest << endl;
    return 0;
}