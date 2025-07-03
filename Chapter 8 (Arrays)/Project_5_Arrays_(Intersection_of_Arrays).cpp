// WAP the intersection of two Arrays.

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter Size of Array 1 : ";
    cin >> n1;
    cout << "Enter Size of Array 2 : ";
    cin >> n2;

    int arr1[100], arr2[100], inter[100];
    cout << "Enter Values of Array 1 : " << endl;
    for (int i = 0; i < n1; i++) {
        cout << "Index " << i << " : ";
        cin >> arr1[i];
    }

    cout << "Enter Values of Array 2 : " << endl;
    for (int i = 0; i < n2; i++) {
        cout << "Index " << i << " : ";
        cin >> arr2[i];
    }

    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already added to intersection
                bool alreadyExists = false;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == arr1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists) {
                    inter[k++] = arr1[i];
                }
            }
        }
    }

    cout << "Intersection: ";
    for (int i = 0; i < k; i++) {
        cout << inter[i] << " ";
    }
    cout << endl;

    return 0;
}

