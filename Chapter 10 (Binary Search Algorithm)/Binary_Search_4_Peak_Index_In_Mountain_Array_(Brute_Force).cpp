// PEAK INDEX IN MOUNTAIN ARRAY : You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.

// Brute Force Approach : Ansh Solution
#include <iostream>
using namespace std;

int peakIndex(vector<int> arr) {
    int st = 1,
        end =
            arr.size() -
            1;  // st=1 because the array is in form of a mountain as it has a peak , so there is no way a peak/max no. will be at index 0
    int mid = st + (end - st) / 2;
    int max1 = 0, max2 = 0;
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < mid; i++) {
        if (max1 < arr[i]) {
            max1 = arr[i];
            ans1 = i;
        }
    }
    for (int i = mid; i < end; i++) {
        if (max2 < arr[i]) {
            max2 = arr[i];
            ans2 = i;
        }
    }
    if (max1 > max2) {
        return ans1;
    } else if (max1 < max2) {
        return ans2;
    } else if (arr[mid] > max1 && arr[mid] > max2) {
        return mid;
    }
    return -1;
}

int main() {
    vector<int> arr1 = {0, 10, 5, 2};
    cout << peakIndex(arr1) << endl;

    return 0;
}