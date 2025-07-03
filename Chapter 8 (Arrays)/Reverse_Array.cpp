// WAF to Reverse an Array.

// Check Notepad for More info and notes.

#include <iostream>
using namespace std;

// Function Declaration :
void ReverseArray(int arr[], int n);
// n is size of array.

// Function Call :
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};

    ReverseArray(arr1, 5);
    ReverseArray(arr2, 8);

    return 0;
}

// Function Definition :
void ReverseArray(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        // Swapping values
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];

        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }

    // Printing Reversed Array :
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

// NOTE : When we pass an Array in a Function, it is always call by Reference i.e.
// the value of array is modified in the original Function.