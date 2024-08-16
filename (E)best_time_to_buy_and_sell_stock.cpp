#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyingPrice = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(buyingPrice > prices[i]) {
                buyingPrice = prices[i];
            }
            profit = max(profit, prices[i] - buyingPrice);
        }
        return profit;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input
    int result = solution.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
