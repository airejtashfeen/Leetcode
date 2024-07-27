#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;

        int result = -1;
        vector<int> nums2 = nums;
        sort(nums2.begin(), nums2.end());

        if (nums2[n-2] * 2 <= nums2[n-1]) {
            int ans = nums2[n-1];
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == ans) {
                    result = i;
                    break;
                }
            }
        } else {
            return -1;
        }

        return result;
    }
};

int main() {
    vector<int> nums1 = {3, 6, 1, 0};
    vector<int> nums2 = {1, 2, 3, 4};

    Solution sol;

    int index1 = sol.dominantIndex(nums1);
    cout << "The dominant index for nums1 is: " << index1 << endl;

    int index2 = sol.dominantIndex(nums2);
    cout << "The dominant index for nums2 is: " << index2 << endl;

    return 0;
}
