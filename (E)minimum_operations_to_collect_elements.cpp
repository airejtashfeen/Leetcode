#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> seen;
        int count = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] <= k) {
                seen.insert(nums[i]);
            }
            count++;

            if (seen.size() == k) {
                break;
            }
        }

        return count;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;

    Solution solution;
    int result = solution.minOperations(nums, k);

    cout << "Minimum operations: " << result << endl;

    return 0;
}