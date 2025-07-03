/* Square Pattern : 

  1  2  3  4
  1  2  3  4  
  1  2  3  4 
  1  2  3  4  
   ....   n times... */

// n = number of rows = number of columns

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin >>n;

    for(int i=0; i<n; i++) {
      for(int j=1; j<=n; j++) {
        cout << j << "  ";
      }
      cout << endl;
    }

    return 0;
}