#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 4, 2, 4, 5, 4, 8, 4, 9};
    int target = 4;
    int count = 0;

    for (int num : arr) {
        if (num == target) {
            count++;
        }
    }

    cout << "The element " << target << " occurs " << count << " times." << endl;

    return 0;
}