// NUMBER OF PAIR SUM : Return the number of pairs sum eqaul to the target.

#include <iostream>
using namespace std;

// Function Decalaration :
int countUniquePairs(vector<int> arr, int target);
int countTotalPairs(vector<int> arr , int target);

// Function Call :
int main() {
    vector<int> arr = {-1 , 1, 5 , 5 , 7};
    int target = 6;

    cout<<"Number of Unique Pair : "<<countUniquePairs(arr , target)<<endl;
    cout<<"Total Number of Pair : "<<countTotalPairs(arr , target)<<endl;
    
    return 0;
}

// Function Definition :
int countUniquePairs(vector<int> arr, int target) {

    int n = arr.size();
    sort(arr.begin() , arr.end());
    
    int i=0 , j = n-1 , count = 0;
    
    while(i<j){
        int pairSum = arr[i] + arr[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            count++;
            i++;
            j--;
        }
    }
    
    return count;
}


int countTotalPairs(vector<int> arr , int target){
    int n = arr.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(arr[i] + arr[j] == target)
                    count++;
            }
        }
        return count;
}

// (-1, 7) → indices (0, 4)
// (1, 5) → indices (1, 2)
// (1, 5) → indices (1, 3)