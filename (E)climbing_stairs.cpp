#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int countStairs(int index, vector<int>&dp){
        if(index==0 || index==1) return 1;

        if(dp[index]!=-1) return dp[index];

        dp[index]= countStairs(index-1, dp) + countStairs(index-2,dp);
        return dp[index];
    }

public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
       return countStairs(n,dp);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of ways to climb " << n << " stairs: " << sol.climbStairs(n) << endl;
    return 0;
}