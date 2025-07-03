// KADANE'S ALGORITHM :

// Finding Maximum Array Sum using Kadanes Algorith as it is a more optimised approach then the brute force Approach
// (Refer File : Arrays_5.2_Maximum_SubArray_Sum_(Brute_Force_Approach).cpp)

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};


    // Using For Loop :

    int currSum1 = 0;  // current sum
    int maxSum1 = INT_MIN;  // max sum

    for (int i = 0; i < n; i++) {
        currSum1 += arr[i];
        maxSum1 = max(currSum1, maxSum1);
        if (currSum1 < 0) {
            currSum1 = 0;
        }
    }
    cout << "Maximum SubArray Sum = " << maxSum1 << endl;


    // Using For Each Loop :
    int currSum2 = 0;
    int maxSum2 = INT_MIN;

    for (int val : arr) {
        currSum2 += val;
        maxSum2 = max(currSum2, maxSum2);
        if (currSum2 < 0) {
            currSum2 = 0;
        }
    }
    cout << "Maximum SubArray Sum = " << maxSum2 << endl;

    
    return 0;
}