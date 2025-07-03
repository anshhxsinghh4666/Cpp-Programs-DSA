// INPUT IN C++ : 


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age;
    cout <<"Enter Age : ";
    cin>>age;
    cout <<"Your Age is "<<age<<endl;

    // Prints GeeksForGeeks with double quotes :
    cout<<"\"GeeksForGeeks\""<<endl;

    // Print FLoat with precise number of points after decimal : 
    float a = 10;
    float b = 3;
    float ans = a/b;    
    cout<<fixed<<setprecision(3)<<ans<<endl;

    // Scientific Output : 
    double s = 6.87;
    cout<<scientific<<setprecision(4)<<a<<endl;
    return 0;
}