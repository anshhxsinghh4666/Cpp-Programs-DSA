// COMPUTE x^n : BINARY EXPONENTIATION 


#include <iostream>
using namespace std;

int main(){
    int x , n;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter n : ";
    cin>>n;

    long binform = n;
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    double ans = 1;

    if(n==0){
        cout<<"Answer : "<<1.0<<endl;
        return 0;
    }
    if(x==1){
        cout<<"Answer : "<<1.0<<endl; 
        return 0;
    }
    if(x==0){
        cout<<"Answer : "<<0.0<<endl;
        return 0;
    }
    if(x==-1 && n%2==0){
        cout<<"Answer : "<<1.0<<endl;
        return 0;
    }
    if(x==-1 && n%2==0){
        cout<<"Answer : "<<-1.0<<endl;
        return 0;
    }

    while(binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    
    cout<<"Answer : "<<ans<<endl;

    return 0;
}