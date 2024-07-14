#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0; 
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[high]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return nums[low];
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Minimum element is: " << sol.findMin(nums1) << endl;  // Output: 1

    // Test case 2
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Minimum element is: " << sol.findMin(nums2) << endl;  // Output: 0

    // Test case 3
    vector<int> nums3 = {11, 13, 15, 17};
    cout << "Minimum element is: " << sol.findMin(nums3) << endl;  // Output: 11

    // Test case 4
    vector<int> nums4 = {2, 2, 2, 0, 1};
    cout << "Minimum element is: " << sol.findMin(nums4) << endl;  // Output: 0

    return 0;
}
