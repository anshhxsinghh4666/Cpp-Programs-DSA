// While Loop : 

// Synatx : 

// while (condition) {
//    statement(s);
//    }

#include <iostream>
using namespace std;

int main() {
    // Printing Numbers from 1 to n
    int count=0;
    int n;
    cout <<"Enter N : ";
    cin>>n;
    while(count<=n){
        cout <<count<<endl;
        count++;
    }
    return 0;
}