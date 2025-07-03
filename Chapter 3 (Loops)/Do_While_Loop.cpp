// Do-While Loop :

// Synatx : 

// do {
//     // Work
// }while(Condition);


#include <iostream>
using namespace std;

int main() {
    // Print Numbers from 1 to n : 
    int n;
    cout <<"Enter N : ";
    cin>>n;
    int i=0;
    do{
        cout <<i<<endl;
        i++;
    }while(i<=n);
    
    return 0;
}