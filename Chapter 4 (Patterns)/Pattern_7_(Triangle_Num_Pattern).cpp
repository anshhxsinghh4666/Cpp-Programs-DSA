/* Triangle Pattern : 

  1
  2  2
  3  3  3
  4  4  4  4 
   ....   n times... */



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout <<i<<"  ";
        }
        cout <<endl;
    }
    return 0;
}