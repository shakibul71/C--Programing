#include <iostream>
using namespace std;

int main() {
    int totalDays;
 cout << "Enter total number of days: ";
    cin >> totalDays;

int years = totalDays / 365;
    int remainingAfterYears = totalDays % 365;

int months = remainingAfterYears / 30;
    int days = remainingAfterYears % 30;

 cout << totalDays << " days = "
       
     << years << " years, "
   << months << " months, "
       << days << " days" << endl;
    return 0;
}