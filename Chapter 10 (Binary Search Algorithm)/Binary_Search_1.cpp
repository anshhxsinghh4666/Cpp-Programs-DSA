// BINARY SEARCH :

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = (st + end) / 2;
        if (target < arr[mid]) {
            end = mid - 1;
        } else if (target > arr[mid]) {
            st = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (target < arr[mid]) {
            end = mid - 1;
        } else if (target > arr[mid]) {
            st = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};  // Odd
    int target1 = 12;
    cout << binarySearch(arr1, target1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};  // Even
    int target2 = 0;
    cout << binarySearch(arr2, target2) << endl;

    return 0;
}
int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};  // Odd
    int target1 = 12;
    cout << binarySearch(arr1, target1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};  // Even
    int target2 = 0;
    cout << binarySearch(arr2, target2) << endl;

    return 0;
}