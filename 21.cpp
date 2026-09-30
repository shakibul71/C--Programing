#include <iostream>
using namespace std;

int main() {
    long totalSeconds;
 cout << "Enter total seconds: ";
 cin >> totalSeconds;

  long hours = totalSeconds / 3600;
  long remaining = totalSeconds % 3600;
  long minutes = remaining / 60;
 long seconds = remaining % 60;

    cout << totalSeconds << " seconds = "
   << hours << " hours, "
        << minutes << " minutes, "
      << seconds << " seconds" << endl;
    return 0;
}