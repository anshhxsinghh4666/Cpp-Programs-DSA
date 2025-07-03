// Conditional Statements :  

#include <iostream>
using namespace std;

int main() {
    int a;
    cout <<"Enter Number : ";
    cin>>a;

    if (a>0){
        cout <<"Positive"<<endl;
    }
    else if (a<0){
        cout <<"Negative"<<endl;
    }
    else {
        cout <<"ZERO"<<endl;
    }

    return 0;
}