// WAP to check if the number is odd or even.


#include <iostream>
using namespace std;

int main() {
    int num;

    cout <<"Enter NUmber : ";
    cin>>num;

    if (num%2 == 0){
        cout <<"Even"<<endl;
    }
    else if (num%2 != 1){
        cout <<"Odd"<<endl;
    }
    
    return 0;
}