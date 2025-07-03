/* Hollow Diamond Pattern : (Not Imp For Interviews)

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *        

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;

    // Top half
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = n - 2; i >= 0; i--) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}