#include <iostream>
using namespace std;

int main() {
    
    // Arithmetic Operators : 
    cout <<"Arithmetic Operators : "<<endl;
    int a=5 , b=10;

    cout <<"Sum = "<<a+b<<endl;
    cout <<"Differerence = "<<a-b<<endl;
    cout <<"Product = "<<a*b<<endl;
    cout <<"Division = "<<a/b<<endl;  // This will not show the value after decimal i.e. 5/2 = 2 NOT 2.5 (incase of int/int devision).
    // NOTE : int/float -> float value and so on i.e we get the answer in the bigger datatype available.
    cout <<"Division = "<<5/(double)2<<endl;  // Will give double value.
    cout <<"Remainder = "<<a%b<<endl;
    cout <<endl;


    // Relational Operator : 
    cout <<"Relational Operator : "<<endl;

    cout << (3<5) <<endl; // True -> 1;
    cout << (3>5) <<endl; // False -> 0;
    cout << (3<=5) <<endl; // True -> 1;
    cout << (3>=5) <<endl; // False -> 0;
    cout << (3==5) <<endl; // False -> 0;
    cout << (3!=5) <<endl; // True -> 1;
    // NOTE : Always use brackets in this case otherwise you'll get error.
    cout <<endl;

    
    // Logical Operators :
    cout <<"Logical Operator : "<<endl;

    cout <<!(3<5) <<endl; // NOT operator (!) provides opposite of the answer.
    cout <<((3<5) && (5>2))<<endl; // AND operator (&&) provides true if both conditions are true.
    cout <<((3<5) || (5>2)) <<endl; // OR operator (||) provides true if at least one of the conditions is true.
    // NOTE : Always use brackets in this case otherwise you'll get error.
    cout <<endl;


    // Uranary Operator : 
    cout <<"Uranary Operator : "<<endl;

    // Post Increment Operator :
    int c = a++;
    cout <<"C= "<<c<<endl;
    cout <<"A = "<<a<<endl;
    
    int d = ++b;
    cout <<"D= "<<d<<endl;
    cout <<"B = "<<b<<endl;

    // Similarly a-- and --a;

    

    return 0;
}