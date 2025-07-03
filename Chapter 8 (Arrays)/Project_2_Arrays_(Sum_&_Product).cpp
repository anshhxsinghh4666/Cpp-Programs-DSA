// WAF to calculate sum and product of all numbers of an array :


#include <iostream>
using namespace std;

// Function Decalaration :
int sum(int n, int arr[]);
int product(int n, int arr[]);

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
    cout << "Sum of All Numbers : " << sum(n, arr) << endl;
    cout << "Product of All Numbers : " << product(n, arr) << endl;

    return 0;
}

// Function Definition :
int sum(int n, int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int product(int n, int arr[]) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}