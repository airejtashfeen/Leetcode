#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> findIndices(std::vector<int>& nums, int indexDifference, int valueDifference) {
        std::vector<int> ans; 
        if (nums.size() == 1 && indexDifference == 0 && valueDifference == 0) {
            return {0, 0};
        }
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (std::abs(i - j) >= indexDifference && std::abs(nums[i] - nums[j]) >= valueDifference) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};


int main() {
    Solution sol;
    std::vector<int> nums = {1, 3, 6, 8};
    int indexDifference = 2;
    int valueDifference = 4;
    std::vector<int> result = sol.findIndices(nums, indexDifference, valueDifference);
    std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;
    return 0;
}
