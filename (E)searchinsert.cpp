#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) {
            mid = low + (high - low) / 2; 
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }   
        return low;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target = 8;

    Solution solution;
    int result = solution.searchInsert(nums, target);

    cout << "Target " << target << " should be inserted at index " << result << endl;

    return 0;
}
