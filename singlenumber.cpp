#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR operation
        }
        return result;
    }
};

int main() {
    Solution solution;
    
    // Example usage
    vector<int> nums1 = {2, 2, 1};
    vector<int> nums2 = {4, 1, 2, 1, 2};
    
    cout << "Single number in nums1: " << solution.singleNumber(nums1) << endl;
    cout << "Single number in nums2: " << solution.singleNumber(nums2) << endl;
    
    return 0;
}
