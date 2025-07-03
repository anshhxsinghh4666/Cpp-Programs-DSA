// WAP to find the unique value in an Array :


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Values of Array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count += 1;
            }
        }
        if (count == 1) {
            cout << arr[i] << " is Unique" << endl;
        }
    }
    return 0;
}