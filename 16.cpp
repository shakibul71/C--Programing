#include <iostream>
using namespace std;

int main() {
    double base, height;

    cout << "Enter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;

double area = 0.5 * base * height;
    cout << "Area of triangle = " << area << endl;
    return 0;
}