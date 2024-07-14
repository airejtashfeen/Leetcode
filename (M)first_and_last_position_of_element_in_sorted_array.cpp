#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int lb = lowerBound(nums, nums.size(), target);
        // Check if lb is within bounds and nums[lb] is the target
        if (lb == nums.size() || nums[lb] != target) {
            return {-1, -1};
        }
        // Find the last position of the target
        return {lb, upperBound(nums, nums.size(), target) - 1};
    }

private:
    int lowerBound(const std::vector<int>& arr, int n, int x) {
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = (low + high) / 2;
            // maybe an answer
            if (arr[mid] >= x) {
                ans = mid;
                // look for smaller index on the left
                high = mid - 1;
            } else {
                low = mid + 1; // look on the right
            }
        }
        return ans;
    }

    int upperBound(const std::vector<int>& arr, int n, int x) {
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = (low + high) / 2;
            // maybe an answer
            if (arr[mid] > x) {
                ans = mid;
                // look for smaller index on the left
                high = mid - 1;
            } else {
                low = mid + 1; // look on the right
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    std::vector<int> result = sol.searchRange(nums, target);

    std::cout << "Start: " << result[0] << ", End: " << result[1] << std::endl;
    
    return 0;
}
