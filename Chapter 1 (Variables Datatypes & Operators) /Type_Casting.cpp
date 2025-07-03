// TypeCasting : Converting one datatype to another.

//              -> TypeCasting : Done by programmer mannually.
//              -> TyoeConversion : Done automatucally by compiler.


#include <iostream>
using namespace std;

int main() {
    
    //  TypeConversion : 
    char grade = 'A';
    int value = grade;
    cout <<value<<endl;

    // TypeCasting : 
    double price = 100.99;
    int newprice = (int)price; // TypeCasting double to int.
    cout <<newprice<<endl;  // 100.99 will be typecasted to 100 NOT rounded off to 101.

    return 0;
}