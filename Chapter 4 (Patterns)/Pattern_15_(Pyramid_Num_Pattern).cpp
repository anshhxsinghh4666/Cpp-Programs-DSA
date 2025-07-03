/* Pyramid Pattern : 

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
   ....   n times... */

//    To solve this divide the pattern into 2 parts 
 /*        |\
          1| \
        1 2| 1\
      1 2 3| 2 1\
    1 2 3 4| 3 2 1\ 
            -------
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter N : ";
    cin>>n;
    

    for(int i=0; i<n; i++){

    // Spaces 
    for(int k=0; k<n-k-1; k++){
        cout <<"  ";
    }

    // Num1 : 
    for(int i=1; i<=n; i++){
        cout<<i<<"  ";
    }

    // Num2 : 
    for(int j=1; j>0; j++){
        cout <<j;
    }

    cout <<endl;
}


    
    return 0;
}