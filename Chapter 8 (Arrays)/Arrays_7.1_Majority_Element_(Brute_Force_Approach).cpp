// MAJORITY ELEMENT : Brute Force Approach

// (Check Notes for more details)
// Leetcode Problem 169 :


#include <iostream>
#include <vector>
using namespace std;

// Function Decalaration :
int majorityElement(vector<int> nums);

// Function Call :
int main() {
    vector<int> nums = {2, 1, 2, 1, 1, 1};

    cout << "Majority Element : " << majorityElement(nums);
    return 0;
}

// Function Definition :
int majorityElement(vector<int> nums) {
    int n = nums.size();

    for (int val : nums) {
        int frequency = 0;
        for (int ele : nums) {
            if (ele == val) {
                frequency++;
            }
        }
        if (frequency > n / 2) {
            return val;
        }
    }
}
