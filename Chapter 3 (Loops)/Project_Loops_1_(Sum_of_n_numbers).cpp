// WAP to find the sum of n numbers 


#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout <<"Enter N : ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        count+=i;
    }

    cout <<"Sum = "<<count<<endl;


    return 0;
}