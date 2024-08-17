#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == target) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    
    vector<int> result = sol.targetIndices(nums, target);
    
    cout << "Target indices: ";
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}
