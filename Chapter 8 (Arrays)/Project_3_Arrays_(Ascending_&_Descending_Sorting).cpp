// Sort the Array in Ascending and Dewscending order


#include <iostream>
using namespace std;

// Function Decalaration :
void ascending(int n, int arr[]);
void descending(int n, int arr[]);

// Function Call :
int main() {
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Values at : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " : ";
        cin >> arr[i];
    }

    ascending(n, arr);
    cout << "Sorted Array (Ascending) : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }

    cout << endl;

    descending(n, arr);
    cout << "Sorted Array (Descending) : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }

    return 0;
}

// Function Definition :
void ascending(int n, int arr[]) {
    // Bubble Sorting :
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void descending(int n, int arr[]) {
    // Bubble Sorting :
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}