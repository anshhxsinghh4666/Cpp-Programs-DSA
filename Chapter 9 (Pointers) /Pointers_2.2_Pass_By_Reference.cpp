// POINTERS : PASS BY REFERENCE USING ALIAS


#include <iostream>
#include <vector>
using namespace std;

void changeA(int &b){  // Pass By Reference Using Alias 
    *ptr  = 20;
}

int main(){
    int a = 10;
    changeA(&a);

    cout<<"Inside main fnx : "<<a<<endl;

    return 0;
}
