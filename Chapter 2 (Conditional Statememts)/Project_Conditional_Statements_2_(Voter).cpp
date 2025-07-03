// WAP to check if the person is eligible to vote or not.


#include <iostream>
using namespace std;

int main() {
    int age;
    cout <<"Enter Age : ";
    cin>>age;

    if (age>=18){
        cout <<"Eligible to Vote"<<endl;
    }
    else{
        cout <<"Not Eligible to Vote"<<endl;
    }
    return 0;
}