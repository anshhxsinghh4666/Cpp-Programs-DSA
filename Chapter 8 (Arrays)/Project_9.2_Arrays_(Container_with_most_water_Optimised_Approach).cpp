// CONTAINER WITH MOST WATER : Optimised Approach 

// Two Pointer Approach


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
    int lp = 0;
    int rp = n-1;
    int maxWater = 0;

    while(lp<rp){
        int h = min(height[lp] , height[rp]);
        int w = rp-lp;
        int currWater = h*w;
        maxWater = max(currWater, maxWater);
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }

    return maxWater;
}