// CONTAINER WITH MOST WATER : Brute Force Approach 


#include <iostream>
using namespace std;

// Function Decalaration :
int maxArea(vector<int> height);

// Function Call :
int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<"Max Area : "<<maxArea(height)<<endl;
    return 0;
}

// Function Definition :
int maxArea(vector<int> height){
    int n = height.size();
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            int h = min(height[i] , height[j]);
            int w = j-i;
            int area = h*w;
            ans = max(ans, area);
        }
    }
    return ans;
} 