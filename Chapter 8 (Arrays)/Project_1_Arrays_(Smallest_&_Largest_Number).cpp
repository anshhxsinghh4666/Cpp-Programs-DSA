// WAP to find the smallest and largest number in an array :


#include <iostream>
using namespace std;

// Function Decalaration :
int smallest(int n, int arr[]);
int largest(int n, int arr[]);

// Function Call :
int main() {
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Values : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Smallest Number : " << smallest(n, arr) << endl;
    cout << "Largest Number : " << largest(n, arr) << endl;


    return 0;
}

// Function Definition :

// Smallest Number :
int smallest(int n, int arr[]) {
    int num = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < num) {
            num = arr[i];
        }
    }
    return num;
}

// Largest Number :
int largest(int n, int arr[]) {
    int num = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > num) {
            num = arr[i];
        }
    }
    return num; 
}
