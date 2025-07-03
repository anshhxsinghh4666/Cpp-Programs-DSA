// MAJORITY ELEMENT : Optimised Approach

// (Check Notes for more details)
// Leetcode Problem 169 :


#include <iostream>
#include <vector>
using namespace std;

// Function Decalaration :
int majorityElement(vector<int> nums);

// Function Call :
int main() {
    vector<int> nums = {1, 2, 4, 7, 2, 7, 23, 5, 7, 4, 7, 7, 7,
                        7, 7, 7, 2, 2, 5, 2,  7, 7, 7, 7, 7, 7};

    cout << "Majority Element = " << majorityElement(nums)<<endl;

    return 0;
}

// Function Definition :
int majorityElement(vector<int> nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
            if (freq == n / 2) {
                ans = nums[i];
                return ans;
            }
        } else {
            freq = 1;
            ans = nums[i];
        }
    }
    return ans;
}