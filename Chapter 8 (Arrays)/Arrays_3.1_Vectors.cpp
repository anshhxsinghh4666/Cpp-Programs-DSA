// VECTORS : Array like data structure
//           They are dynamic in nature unlike arrays i.e they have no fixed size , there size is changable

/* Syntax :
    vector <datatype> variableName;
    vector <datatype> variableName = {1,2,3};
    vector <datatype> variableName(size , Element at each index);
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1;  // Since no data is stored in vector so size of vector at this stage is 0
    cout << endl;

    vector<int> vec2 = {11, 12, 33, 10};
    cout << vec2[0] << endl;
    cout << endl;

    // Sorting : 
    sort(vec2.begin() , vec2.end());
    for(int val : vec2){
        cout<< val << " ";
    }
    cout<<endl;

    vector<int> temp(vec2.begin(), vec2.begin() + 2);  // Will Store 1st 2 values of vec2
    for(int val : temp){
        cout<< val << " ";
    }
    cout<<endl;

    vector<int> vec3(3, 0);
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;
    cout << endl;

    // Vector Loop : For each Loop
    for (int ival : vec2) {
        cout << ival << endl;
    }
    cout << endl;


    // Vector Functions :

    // size : returns size of vector
    cout << "Size = " << vec2.size() << endl;
    cout << endl;

    // push_back : push an element in the last of vector
    vec1.push_back(25);
    vec1.push_back(21);
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << "Size = " << vec1.size() << endl;
    cout << endl;

    // pop_back : delete last element from vector
    vec2.pop_back();
    cout << "Size = " << vec2.size() << endl;
    cout << endl;

    // front : prints the front value (1st value) of vector
    cout << vec1.front() << endl;
    cout << endl;

    // back : prints the last value of vector
    cout << vec1.back() << endl;
    cout << endl;

    // at : Another function to access value at any index of vector
    cout << vec1.at(0) << endl;
    cout << endl;


    return 0;
}