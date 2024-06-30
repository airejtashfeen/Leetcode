#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;
        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }
        return ones;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> nums1 = {2, 2, 3, 2};
    vector<int> nums2 = {0, 1, 0, 1, 0, 1, 99};

    cout << "Single number in nums1: " << solution.singleNumber(nums1) << endl;
    cout << "Single number in nums2: " << solution.singleNumber(nums2) << endl;

    return 0;
}
