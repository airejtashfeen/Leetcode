#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool isPossibleToSplit(const std::vector<int>& nums) {
        std::unordered_map<int, int> hashMap;

        for (int num : nums) {
            ++hashMap[num];
        }

        for (const auto& pair : hashMap) {
            if (pair.second > 2) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    
    std::vector<int> nums1 = {1, 2, 1, 3, 3, 4};  
    bool result1 = solution.isPossibleToSplit(nums1);
    std::cout << "Test Case 1: " << (result1 ? "Possible to Split" : "Not Possible to Split") << std::endl;

    std::vector<int> nums2 = {1, 1, 2, 2, 2, 3};  
    bool result2 = solution.isPossibleToSplit(nums2);
    std::cout << "Test Case 2: " << (result2 ? "Possible to Split" : "Not Possible to Split") << std::endl;

    std::vector<int> nums3 = {1, 2, 3, 4, 5};    
    bool result3 = solution.isPossibleToSplit(nums3);
    std::cout << "Test Case 3: " << (result3 ? "Possible to Split" : "Not Possible to Split") << std::endl;

    std::vector<int> nums4 = {1, 2, 2, 2, 3};    
    bool result4 = solution.isPossibleToSplit(nums4);
    std::cout << "Test Case 4: " << (result4 ? "Possible to Split" : "Not Possible to Split") << std::endl;

    return 0;
}
