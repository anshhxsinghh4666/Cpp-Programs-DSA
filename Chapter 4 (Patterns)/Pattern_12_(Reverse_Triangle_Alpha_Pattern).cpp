/* Reverse Pattern : 

  A
  B  A
  C  B  A
  D  C  B  A
   ....   n times... */



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;

    
    for(int i=0; i<=n; i++){
        char ch='A'+(i-1);
        for(int j=i; j>0; j--){
            cout <<ch<<"  ";
            ch--;
        }
        cout <<endl;
    }
    return 0;
}
