#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int f(int m, int n, vector<vector<int>>& dp) {
       
        if (m == 0 || n == 0) {
            return 1;
        }

        if (dp[m][n] != -1) {
            return dp[m][n];
        }

        int up = f(m - 1, n, dp);
        int left = f(m, n - 1, dp);

        return dp[m][n] = up + left;
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m - 1, n - 1, dp);
    }
};

int main() {
    Solution sol;
    int m = 3, n = 3; 
    cout << "Unique paths: " << sol.uniquePaths(m, n) << endl;
    return 0;
}
