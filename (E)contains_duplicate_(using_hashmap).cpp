#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); ++i) {
            if (hashmap.find(nums[i]) != hashmap.end()) {
                return true;
            }
            hashmap[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Test cases
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Contains duplicate in nums1: " << sol.containsDuplicate(nums1) << endl;

    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Contains duplicate in nums2: " << sol.containsDuplicate(nums2) << endl;

    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << "Contains duplicate in nums3: " << sol.containsDuplicate(nums3) << endl;

    return 0;
}
