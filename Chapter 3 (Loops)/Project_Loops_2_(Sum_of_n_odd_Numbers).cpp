// WAP to find the sum of n odd numbers 


#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int n;
    cout <<"Enter N : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum+=i;
        }
        else {
            continue;
        }
    }

    cout <<"Sum of Odd Numbers = "<<sum<<endl;
    return 0;
}