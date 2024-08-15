#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;
        int currentSum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] > nums[i - 1]) {
                currentSum += nums[i];
            } else {
                maxSum = max(maxSum, currentSum);
                currentSum = nums[i];
            }
        }

        maxSum = max(maxSum, currentSum); // Check the last sequence

        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {10, 20, 30, 5, 10, 50};
    int result = solution.maxAscendingSum(nums);
    printf("Max ascending sum: %d\n", result);
    return 0;
}
