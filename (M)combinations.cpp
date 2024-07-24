#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    void backtrack(int start, vector<int>& current, vector<vector<int>>& ans, int n, int k) {
        if (current.size() == k) {
            ans.push_back(current);
            return;
        }
        
        for (int i = start; i <= n; ++i) {
            current.push_back(i);
            backtrack(i + 1, current, ans, n, k); 
            current.pop_back(); 
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(1, current, ans, n, k); 
        return ans;
    }
};

int main() {
    Solution solution;
    int n = 4, k = 2;

    vector<vector<int>> result = solution.combine(n, k);

    cout << "Combinations of " << k << " numbers from 1 to " << n << " are:\n";
    for (const auto& combination : result) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]\n";
    }

    return 0;
}
