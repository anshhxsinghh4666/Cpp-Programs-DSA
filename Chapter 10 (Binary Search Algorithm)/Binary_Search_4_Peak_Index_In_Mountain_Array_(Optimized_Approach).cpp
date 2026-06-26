// PEAK INDEX IN MOUNTAIN ARRAY (Leetcode Q852): You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.

// Optimized Approach
#include <iostream>
using namespace std;

int peakIndex(vector<int> arr) {
    int st = 1, end = arr.size() - 2;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid]) {
            return mid;
        } else if (arr[mid - 1] < arr[mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {0, 10, 5, 2};
    cout << peakIndex(arr1) << endl;

    return 0;
}