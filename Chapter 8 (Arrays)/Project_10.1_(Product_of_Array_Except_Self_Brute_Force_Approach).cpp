// PRODUCT OF ARRAY EXCEPT SELF : 

/* Given an integer array nums, return an array answer such that answer[i] is
   equal to the product of all the elements of nums except nums[i].
*/

#include <iostream>
using namespace std;

// Function Decalaration :
vector<int> productExceptSelf(vector<int>& nums);

// Function Call :
int main() {
    vector<int> nums = {1,2,3,4};

    vector<int> ans = productExceptSelf(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

// Function Definition :
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> ans;
        for(int i=0 ; i<nums.size(); i++){
            int pro = 1;
            for(int j=0; j<nums.size(); j++){
                if(j!=i){
                    pro*=nums[j];
                }
            }
            ans.push_back(pro);
        }
        return ans;
}