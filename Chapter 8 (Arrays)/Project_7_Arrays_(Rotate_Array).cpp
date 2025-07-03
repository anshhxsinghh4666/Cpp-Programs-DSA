/*  Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, 
    where d is a positive integer. Do the mentioned change in the array in place.
*/


#include <iostream>
using namespace std;

// Function Decalaration :
void rotateArr(vector<int>& arr, int d);

// Function Call :
int main() {
    int d;
    vector<int> arr = {1,2,34,5,7,6,54,4};
    int n = arr.size();
    cout<<"Enter Number of Rotations 'd' = ";
    cin>>d;

    rotateArr(arr, d);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// Function Definition :
void rotateArr(vector<int>& arr, int d){
    int n = arr.size();
    if(n==0||d==0||d>=n){
        d=d%n;
    }
    vector<int> temp (arr.begin() , arr.begin()+d);
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = 0; i<temp.size(); i++){
        arr[n-d+i] = temp[i];
    }
}