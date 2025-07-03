// POINTER : PASS BY REFERENCE USING POINTERS


#include <iostream>
#include <vector>
using namespace std;

void changeA(int& b){  // Pass By Reference Using Alias
    b = 20;
}

int main(){
    int a = 10;
    changeA(a);

    cout<<"Inside main fnx : "<<a<<endl;

    return 0;
}
