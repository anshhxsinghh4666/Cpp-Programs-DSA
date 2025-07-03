#include <iostream>
#include "myheader.h"
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter Size Of Matrix : ";
    cin >> n;

    vector<int> arr(n);

    inarr(arr, n);

    outarr(arr,n);

    return 0;
}