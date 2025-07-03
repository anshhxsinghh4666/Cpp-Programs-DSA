// PAIR SUM : Return pair in sorted array with target sum.

// Optimised Approach : (Check Notes for details)
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
    sort(nums.begin() , nums.end());

    int i = 0, j = n - 1;
    while (i < j) {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target) {
            j--;
        } else if (pairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}