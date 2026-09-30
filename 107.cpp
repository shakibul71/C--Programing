#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 20, 40, 20, 50};
    int target = 20;
    int index = -1;

    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            index = i; 
            break;
        }
    }

    if (index != -1) {
        cout << "First occurrence of " << target << " is at index: " << index << endl;
    } else {
        cout << "Element " << target << " not found." << endl;
    }

    return 0;
}