#include<iostream>
using namespace std;

// This is a simple implementation of the Best Time to Buy and Sell Stock problem in C++14
// optimized for readability and understanding.


int bestTimeToBuyAndSellStock(int prices[], int n) {
    if (n == 0) return 0; // No prices available

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Update min price
        } else {
            int profit = prices[i] - minPrice; // Calculate profit
            if (profit > maxProfit) {
                maxProfit = profit; // Update max profit
            }
        }
    }

    return maxProfit;
}

// optimize solution 

int bestTimeToBuyAndSellStockOptimized(int prices[], int n) {
    if (n == 0) return 0; // No prices available

    int minPrice = prices[0];//7
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        minPrice = min(minPrice, prices[i]); // Update min price 
        maxProfit = max(maxProfit, prices[i] - minPrice); // Update max profit 
    }

    return maxProfit;
}


int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int maxProfit = bestTimeToBuyAndSellStock(prices, n);
    cout << "Maximum Profit: " << maxProfit << endl;

    int maxProfitOptimized = bestTimeToBuyAndSellStockOptimized(prices, n);
    cout << "Maximum Profit (Optimized): " << maxProfitOptimized << endl;

    return 0;
}

//output:
// Maximum Profit: 5