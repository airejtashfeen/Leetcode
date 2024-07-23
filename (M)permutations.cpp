#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void backtrack(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& ans, vector<bool>& used) {
        if (current.size() == nums.size()) {
            ans.push_back(current);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            current.push_back(nums[i]);
            used[i] = true;

            backtrack(index + 1, nums, current, ans, used);

            current.pop_back();
            used[i] = false;
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        backtrack(0, nums, current, ans, used);
        return ans;
    }
};

// Main function to test the permute function
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};  // Example input
    vector<vector<int>> permutations = sol.permute(nums);

    // Print permutations
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
