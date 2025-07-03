// VECTOR FUNCTIONS : 


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Removes all elements from the vector
void clearAll(vector<int>& arr) {
    arr.clear();
}

// Removes the element at the specified position (0-based index)
void eraseAt(vector<int>& arr, int pos) {
    if (pos >= 0 && pos < arr.size()) {
        arr.erase(arr.begin() + pos);
    }
}

// Removes elements in the range [start, end), end not included
void eraseInRange(vector<int>& arr, int start, int end) {
    if (start >= 0 && end <= arr.size() && start < end) {
        arr.erase(arr.begin() + start, arr.begin() + end);
    }
}

// Utility function to print a vector
void printVector(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int main() {
    // Example vector with 8 random elements
    vector<int> arr = {7, 2, 9, 4, 1, 8, 6, 5};
    cout << "Original vector: ";
    printVector(arr);

    // Erase element at position 3 (0-based, so removes 4)
    eraseAt(arr, 3);
    cout << "After eraseAt(3): ";
    printVector(arr);

    // Erase elements from index 2 to 5 (removes 9, 1, 8)
    eraseInRange(arr, 2, 5);
    cout << "After eraseInRange(2, 5): ";
    printVector(arr);

    // Clear all elements
    clearAll(arr);
    cout << "After clearAll(): ";
    printVector(arr);

    return 0;
}