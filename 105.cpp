#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    
    int low = 0;
    int high = arr.size() - 1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            index = mid;
            break;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1) {
        cout << "Element " << target << " found at index: " << index << endl;
    } else {
        cout << "Element " << target << " not found." << endl;
    }

    return 0;
}