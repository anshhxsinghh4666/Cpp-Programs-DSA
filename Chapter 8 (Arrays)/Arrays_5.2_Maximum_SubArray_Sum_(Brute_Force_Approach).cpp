// MAXIMUM SUBARRAY SUM : Find a SubArray with maximum sum.

/* Brute Force Approach : 
    -> FInd all the possible SubArray.
    -> FInd Sum of all subarrays.
    -> SUbarray with maximum sum i the Answer.
*/


#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        ;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "MAx SubArray Sum = " << maxSum << endl;

    return 0;
}