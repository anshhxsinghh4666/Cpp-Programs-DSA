// BINARY SEARCH USING RECURSION :

#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(const vector<int>& arr, int target, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (target < arr[mid]) {
            return recBinarySearch(arr, target, st, mid - 1);
        } else if (target > arr[mid]) {
            return recBinarySearch(arr, target, mid + 1, end);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};  // Odd
    int target1 = 12;
    cout << recBinarySearch(arr1, target1, 0, static_cast<int>(arr1.size()) - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};  // Even
    int target2 = 0;
    cout << recBinarySearch(arr2, target2, 0, static_cast<int>(arr2.size()) - 1) << endl;

    return 0;
}