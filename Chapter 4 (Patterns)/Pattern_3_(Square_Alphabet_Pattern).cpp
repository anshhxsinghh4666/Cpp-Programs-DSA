/* Square Pattern :

   a  b  c  d
   a  b  c  d
   a  b  c  d
   a  b  c  d
   ....   n times... */

// n = number of rows = number of columns

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N :";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char alpha = 'a';
        for (int j = 0; j < n; j++) {
            cout << alpha << "  ";
            alpha++;
        }
        cout << endl;
    }

    return 0;
}