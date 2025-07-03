/* Reverse Triangle Pattern : 

  1
  2  1
  3  2  1
  4  3  2  1 
   ....   n times... */



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;

    for(int i=0; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout <<j<<"  ";
        }
        cout <<endl;
    }
    return 0;
}