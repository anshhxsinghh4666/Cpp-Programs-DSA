// WAP to check if the number is prime or not


#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter Number : "<<endl;
    cin >>n;
    int isprime = 1;

    for(int i=2; i<=n/2 ; i++){
        if(n%i == 0){
            isprime=0;
            break;
        }
    }

    if(isprime==1){
        cout <<n << " is a Prime Number." << endl;
    }
    else {
        cout <<n<<" is NOT a Prime Number." << endl;
    }

    return 0;
}