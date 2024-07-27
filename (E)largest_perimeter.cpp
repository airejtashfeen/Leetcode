#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] < nums[i + 1] + nums[i + 2]) {
                return nums[i] + nums[i + 1] + nums[i + 2];
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 1, 2};
    cout << sol.largestPerimeter(nums1) << endl; // Output: 5

    vector<int> nums2 = {1, 2, 1};
    cout << sol.largestPerimeter(nums2) << endl; // Output: 0

    vector<int> nums3 = {3, 6, 2, 3};
    cout << sol.largestPerimeter(nums3) << endl; // Output: 12

    return 0;
}
