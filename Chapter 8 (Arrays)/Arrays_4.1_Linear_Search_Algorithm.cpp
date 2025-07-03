// LINEAR SEARCH ALGORITHM :


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Values : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " = ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter Target Element : ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Value found at Index : " << i << endl;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Value Not Found " << endl;
    }

    return 0;
}