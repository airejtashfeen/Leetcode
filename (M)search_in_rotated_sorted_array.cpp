#include <iostream>
#include <vector>
using namespace std;

//The main idea here is to identify the sorted half of the array and based on that limit our search space
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    int result = sol.search(nums, target);
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    // Additional test cases
    target = 3;
    result = sol.search(nums, target);
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    target = 6;
    result = sol.search(nums, target);
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
