/* Reverse Pattern : 

  A  A  A  A
     B  B  B
        C  C
           D
   ....   n times... */



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;

    char ch='A';

    for(int i=0; i<n; i++){

        // Spaces : 
        for(int k=0; k<i; k++){
            cout <<"   ";
        }

        // Alphabets :
        char ch = 'A' + (i+1); 
        for(int j=0; j<n-i+1; j++){
            cout <<ch<<"  ";
        }
        cout <<endl;
    }

    return 0;
}