// LINEAR SEARCH ALGORITHM :

// If target element is found return the index where it is found else return -1.


#include <iostream>
using namespace std;

// Function Decalaration :
int search(int n, int arr[], int target);

// Function Call :
int main() {
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Value at : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter Target Element : ";
    cin >> target;

    cout << "Value is found at index : " << search(n, arr, target);

    return 0;
}

// Function Definition :
int search(int n, int arr[], int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}