// WAP to find sum of all numbers from to 1 to N which are divisible by 3.


#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cout <<"Enter N : ";
    cin >>n;
    for(int i=1; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }

    cout <<"SUm = "<<sum<<endl;
    
    return 0;
}