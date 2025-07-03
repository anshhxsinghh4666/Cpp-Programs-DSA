// Variables : It stores different types of datas 


#include <iostream>
using namespace std;

int main() {
    int age=25;
    cout <<age<<endl;
    cout <<"Age = "<<age<<endl;

    cout <<"Size of Age Variable = "<<sizeof(age)<<endl;
    
    char grade = 'A';
    cout <<"Grade : "<<grade<<endl;

    float PI = 3.14f;
    cout <<"pi = "<<PI<<endl;

    bool isafe = true;
    bool notsafe = false;
    cout <<"isafe = "<<isafe<<endl; // True -> 1
    cout <<"notsafe = "<<notsafe<<endl; // False -> 0

    double price = 100.99;
    cout <<"Price : "<<price<<endl;
    cout <<"Size of Price Variable = "<<sizeof(price)<<endl;

    return 0;
}