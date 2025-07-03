// BUY AND SELL STOCK X

/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include <iostream>
using namespace std;

// Function Decalaration :
int maxProfit(vector<int> prices);

// Function Call :
int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout<<"Max Profit : "<<maxProfit(prices)<<endl;

    return 0;
}

// Function Definition :pb
int maxProfit(vector<int> prices){
    int bestBuy = prices[0];
    int maxProfit = 0;

    for(int i=1; i<prices.size(); i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}