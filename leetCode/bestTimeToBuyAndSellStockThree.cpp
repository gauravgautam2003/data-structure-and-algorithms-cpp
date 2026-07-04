#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {

    int buy_1 = INT8_MIN;
    int sell_1 = 0;
    
    int buy_2 = INT8_MIN;
    int sell_2 = 0;

    for(int price : prices) {

        buy_1 = max(buy_1, -price);
        // [-128, -3]:-3, [-3,-3]:-3, [-3,5]:5, [5,0]:5(0,0), [5,3]:5, [5,1]:5, [5,4]: 5
        sell_1 = max(sell_1, buy_1 + price);
        //[0,-3+3]:0(3,3), [0, 5+5]:10, [10, 0+0]:10, [10, 5+3]:10, [10, 5+1]:10, [10, 5+4]:10
        buy_2 = max(buy_2, sell_1 - price);
        //[-128, 0-3]: -3, [-3, 10-5]: 5, [5, 10-0]: 10, [10, 10-0]: 10, [10, 10-3]: 7, [10, 10-1]:9, [9, 10-4]:6
        sell_2 = max(sell_2, buy_2 + price);
        //[0, -3+3]:0, [0, 5+5]:10, [10, 10+0]:10, [10, 10+0]:10, [10, 7+3]:10, [10, 9+1]:10, [10, 6+4]:10
    }

    return sell_2;// 6
}

int main() {
    vector<int> prices = {3,3,5,0,0,3,1,4};
    cout << "max profit: " << maxProfit(prices);
    return 0;

}

// output: 6