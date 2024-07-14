#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int low = 0; 
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return true;

            //Only this part different from search in rotated sorted array
            if(nums[mid]== nums[low] && nums[mid]==nums[high]){
                low++, high--;
                continue;
            }
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
        return false;
    }
    };

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {2, 5, 6, 0, 0, 1, 2};
    int target1 = 0;
    cout << "Target " << target1 << (sol.search(nums1, target1) ? " is " : " is not ") << "in the array." << endl;

    // Test case 2
    vector<int> nums2 = {2, 5, 6, 0, 0, 1, 2};
    int target2 = 3;
    cout << "Target " << target2 << (sol.search(nums2, target2) ? " is " : " is not ") << "in the array." << endl;

    // Test case 3
    vector<int> nums3 = {1, 0, 1, 1, 1};
    int target3 = 0;
    cout << "Target " << target3 << (sol.search(nums3, target3) ? " is " : " is not ") << "in the array." << endl;

    // Test case 4
    vector<int> nums4 = {1, 3, 1, 1, 1};
    int target4 = 3;
    cout << "Target " << target4 << (sol.search(nums4, target4) ? " is " : " is not ") << "in the array." << endl;

    return 0;
}
