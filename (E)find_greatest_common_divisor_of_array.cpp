#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minNumber = nums[0];
        int maxNumber = nums[nums.size() - 1];

        for (int i = minNumber; i >= 1; --i) {
            if (minNumber % i == 0 && maxNumber % i == 0) {
                return i;
            }
        }
        return 0;  
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {2, 5, 6, 9, 10};
    cout << "GCD of nums1: " << solution.findGCD(nums1) << endl;

    // Example 2
    vector<int> nums2 = {3, 3};
    cout << "GCD of nums2: " << solution.findGCD(nums2) << endl;

    // Example 3
    vector<int> nums3 = {7, 14, 21, 28};
    cout << "GCD of nums3: " << solution.findGCD(nums3) << endl;

    return 0;
}
