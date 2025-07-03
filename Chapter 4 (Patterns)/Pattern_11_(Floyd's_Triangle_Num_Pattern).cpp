/* Triangle Pattern : Floyd's Triangle

  1
  2  3
  4  5  6 
  7  8  9  10
   ....   n times... */



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;

    int z=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout <<z<<"  ";
            z++;
        }
        cout <<endl;
    }
    return 0;
}