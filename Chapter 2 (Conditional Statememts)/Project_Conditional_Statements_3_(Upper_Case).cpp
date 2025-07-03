#include <iostream>
using namespace std;

int main() {
    char char1;
    cout <<"Enter Character : ";
    cin >>char1;

    if(char1>=65 && char1<=90){
        cout << "Character is Uppercase" << endl;
    }
    else if(char1>=97 && char1<=122){
        cout << "Character is Lowercase" << endl;
    }
    else if(char1 == 32){
        cout <<"Empty character"<<endl;
    }
    else {
        cout <<"Special Character"<<endl;
    }

    return 0;
}