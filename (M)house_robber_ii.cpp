#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int sumOfSubsequences(const vector<int>& nums) {
        int n = nums.size();
        
        // Base cases
        if (n == 0) return 0;
        if (n == 1) return max(nums[0], 0);

        vector<int> dp(n, 0);
        dp[0] = max(nums[0], 0);  
        dp[1] = max(nums[0], nums[1]);  

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n - 1];
    }

public:
    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;
        if (nums.size() == 1) return nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0) temp1.push_back(nums[i]); // Exclude the first house
            if (i != nums.size() - 1) temp2.push_back(nums[i]); // Exclude the last house
        }

        return max(sumOfSubsequences(temp1), sumOfSubsequences(temp2));
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2, 3, 2}; 

    int result = sol.rob(nums);

    cout << "Maximum amount of money that can be robbed: " << result << endl;

    return 0;
}
