#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i) {
                return i;
            }
        }

        return n;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    std::vector<int> nums1 = {3, 0, 1}; // Missing number is 2
    std::cout << "Missing number in nums1: " << solution.missingNumber(nums1) << std::endl;
    
    std::vector<int> nums2 = {0, 1, 2}; // Missing number is 3
    std::cout << "Missing number in nums2: " << solution.missingNumber(nums2) << std::endl;
    
    std::vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1}; // Missing number is 8
    std::cout << "Missing number in nums3: " << solution.missingNumber(nums3) << std::endl;
    
    return 0;
}
