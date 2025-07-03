// MAJORITY ELEMENT : MOORE"S VOTING ALGORITHM

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

    cout << "Majority Element = " << majorityElement(nums) << endl;

    return 0;
}

// Function Definition :
int majorityElement(vector<int> nums) {
    int n = nums.size();
    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        } 
        else if (ans == nums[i]) {
            freq++;
        } 
        else {
            freq--;
        }
    }

    // If there is a possibility that the array donot contain a majority element then add the below step to check :
    int count = 0;
    for(int val : nums){
        if(ans == val){
            count++;
        }
    }
    if(count>n/2){
        return ans;
    }
    else{
        return -1;
    }
    
    return ans;
}