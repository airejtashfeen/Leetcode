#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    void backtrack(int index, vector<int>& nums, vector<int>& ds, vector<vector<int>>& result) {
        result.push_back(ds);

        for (int i = index; i < nums.size(); ++i) {
            if (i > index && nums[i] == nums[i - 1]) continue;

            ds.push_back(nums[i]);
            backtrack(i + 1, nums, ds, result);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        vector<vector<int>> result;
        vector<int> ds;
        backtrack(0, nums, ds, result);
        return result;
    }
};

int main() {
    Solution s;

    // Test case 1
    vector<int> nums1 = {1, 2, 2};
    vector<vector<int>> result1 = s.subsetsWithDup(nums1);
    
    cout << "Test Case 1 Results:" << endl;
    for (const auto& subset : result1) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Test case 2
    vector<int> nums2 = {0};
    vector<vector<int>> result2 = s.subsetsWithDup(nums2);
    
    cout << "Test Case 2 Results:" << endl;
    for (const auto& subset : result2) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Test case 3
    vector<int> nums3 = {1, 1, 1};
    vector<vector<int>> result3 = s.subsetsWithDup(nums3);
    
    cout << "Test Case 3 Results:" << endl;
    for (const auto& subset : result3) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
