#include <iostream>
#include <vector>
using namespace std;

// VECTOR INPUT : 
void inarr(vector<int>& arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Index : " << i << " ";
        cin >> arr[i];
    }
}

// VECTOR OUTPUT :
void outarr(vector<int>& arr, int size){
    for(int i=0; i<size; i++){
        cout<<"Index "<<i<<" : "<<arr[i]<<endl;
    }
}