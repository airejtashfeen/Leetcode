#include <iostream>
#include <vector>
#include <numeric>   // For std::accumulate
#include <algorithm> // For std::max

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxAns = 0;

        for (const auto& account : accounts) {
            
            int currentWealth = accumulate(account.begin(), account.end(), 0);
            maxAns = max(maxAns, currentWealth);
        }

        return maxAns;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<vector<int>> accounts1 = {{1, 2, 3}, {3, 2, 1}};
    cout << "Maximum Wealth (Example 1): " << sol.maximumWealth(accounts1) << endl;

    // Example 2
    vector<vector<int>> accounts2 = {{1, 5}, {7, 3}, {3, 5}};
    cout << "Maximum Wealth (Example 2): " << sol.maximumWealth(accounts2) << endl;

    // Example 3
    vector<vector<int>> accounts3 = {{2, 8, 7}, {5, 6}, {3, 9, 10, 1}};
    cout << "Maximum Wealth (Example 3): " << sol.maximumWealth(accounts3) << endl;

    return 0;
}
