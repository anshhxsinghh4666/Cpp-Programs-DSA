/*  You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the 
    right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, 
    meaning you should not use extra space for another array.
*/


#include <iostream>
#include <vector>
using namespace std;

// Function Decalaration :
void pushZerosToEnd(vector<int>& arr);  // & means Call by reference , as we want changes in original vector.

// Function Call :
int main() {
    vector<int> arr = {1,0,5,6,0,4,0,0};
    int n = arr.size();

    pushZerosToEnd(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Function Definition :
void pushZerosToEnd(vector<int>& arr){
    int n = arr.size();
    int index = 0;
        
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[index++] = arr[i];
        }
    }
    while(index<n){
        arr[index++] = 0;
    }
}