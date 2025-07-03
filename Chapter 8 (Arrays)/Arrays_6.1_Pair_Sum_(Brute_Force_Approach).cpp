// PAIR SUM : Return pair in sorted array with target sum.

/* Brute Force Approach : 
    -> Find all the pairs possible (subarrays of lenght 2)
    -> Find all the pairs with sum = target : That's the Answer
*/

// This code will only return 1 pair 


#include <iostream>
#include <vector>
using namespace std;

// Function Decalaration :
vector<int> pairSum(vector<int> nums, int target);

// Function Call :
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}

// Function Definition :
vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}