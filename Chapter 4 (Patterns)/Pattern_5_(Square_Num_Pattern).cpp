/* Square Pattern : 

  a  b  c  d 
  e  f  g  h 
  i  j  k  l
  m  n  o  p 
   ....   n times... */

// n = number of rows = number of columns



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin >>n;
    char ch = 'a';

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout <<ch<<"  ";
            ch++;
        }
        cout <<endl;
    }
    return 0;
}