#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;

        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }

        return sum;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 4, 3, 2};
    cout << sol.arrayPairSum(nums1) << endl; // Output: 4

    vector<int> nums2 = {6, 2, 6, 5, 1, 2};
    cout << sol.arrayPairSum(nums2) << endl; // Output: 9

    vector<int> nums3 = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sol.arrayPairSum(nums3) << endl; // Output: 16

    return 0;
}
