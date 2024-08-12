#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> hashMap;
        for (int num : nums) {
            ++hashMap[num];
        }

        for (auto& pair : hashMap) {
            if (pair.second == 1) {
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test case
    vector<int> nums = {4, 5, 6, 4, 7, 5, 8};

    vector<int> result = sol.singleNumber(nums);

    // Print the result
    cout << "Numbers that appear exactly once: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
