// This won't work on leetcode tho as this isn't optimal because of its complexity, however there's an optimal solution in the repo too

//Only solution class written by myself, main etc taken from GPT as unnecessary to spend time
#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // for sort

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            set<int> hashset;
            for (int j = i + 1; j < n; j++) {
                int third = -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

int main() {
    // Example usage of the Solution class
    Solution sol;

    // Example input vector
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Call the threeSum function
    vector<vector<int>> result = sol.threeSum(nums);

    // Print the result
    cout << "Triplets that sum up to zero:" << endl;
    for (const auto& triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}
