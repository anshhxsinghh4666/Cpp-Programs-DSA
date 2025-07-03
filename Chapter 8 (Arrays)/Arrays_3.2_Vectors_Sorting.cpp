// Vector Sorting : 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Sorts the vector in ascending order
vector<int> sortVector(vector<int> v) {
    sort(v.begin(), v.end());
    return v;
}

// Reverses the order of the vector elements
vector<int> reverseVector(vector<int> v) {
    reverse(v.begin(), v.end());
    return v;
}

// Sorts the vector in descending order
vector<int> sortVectorDesc(vector<int> v) {
    sort(v.begin(), v.end(), greater<int>());
    return v;
}

int main(){
    vector<int> v = {2,6,2,6,4,9,3,5,11,74,34};
    int n = v.size();
    vector<int> sortv = sortVector(v);
    cout<<"Ascending Order : ";
    for(int i=0; i<n; i++){
        cout<<sortv[i]<<" ";
    }
    cout<<endl;
    vector<int> rev = reverseVector(v);
    cout<<"Reverse Order : ";
    for(int i=0; i<n; i++){
        cout<<rev[i]<<" ";
    }
    cout<<endl;
    cout<<"Descending Order : ";
    vector<int> desc = sortVectorDesc(v);
    for(int i=0; i<n; i++){
        cout<<desc[i]<<" ";
    }
    cout<<endl;

    return 0;
}