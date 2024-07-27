#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        for (int i = 0; i < k; ++i) {
            auto it = min_element(nums.begin(), nums.end());
            *it = -(*it); 
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};

// Main function to test the solution
int main() {
    Solution sol;
    vector<int> nums = {4, 2, 3};
    int k = 1;
    cout << sol.largestSumAfterKNegations(nums, k) << endl; // Output: 5

    vector<int> nums2 = {3, -1, 0, 2};
    int k2 = 3;
    cout << sol.largestSumAfterKNegations(nums2, k2) << endl; // Output: 6

    vector<int> nums3 = {2, -3, -1, 5, -4};
    int k3 = 2;
    cout << sol.largestSumAfterKNegations(nums3, k3) << endl; // Output: 13

    return 0;
}
