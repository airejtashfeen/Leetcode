#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    void powerSet(int index, vector<int>& nums, vector<int>& currentSet, vector<vector<int>>& result) {
        if (index >= nums.size()) {
            result.push_back(currentSet);
            return;
        }

        // Include the current element
        currentSet.push_back(nums[index]);
        powerSet(index + 1, nums, currentSet, result);
        
        // Exclude the current element
        currentSet.pop_back();
        powerSet(index + 1, nums, currentSet, result);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSet;
        powerSet(0, nums, currentSet, result);
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.subsets(nums);
    
    cout << "The subsets are: \n";
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }

    return 0;
}
