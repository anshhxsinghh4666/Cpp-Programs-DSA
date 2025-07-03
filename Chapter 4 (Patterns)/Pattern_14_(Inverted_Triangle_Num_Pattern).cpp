/* Inverted Triangle Pattern : 

  1  1  1  1
     2  2  2
        3  3
           4  
   ....   n times... */



#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;


    for(int i=1; i<=n; i++){

        // Spaces : 
        for(int k=1; k<=i; k++){
            cout <<"   ";
        }

        // Numbers : 
        for(int j=1; j<=n-i+1; j++){
            cout <<i<<"  ";
        }
        cout <<endl;
    }
    return 0;
}