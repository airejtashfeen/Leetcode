#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (hashmap.find(nums[i]) != hashmap.end() && i - hashmap[nums[i]] <= k) {
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
    int k1 = 3;
    cout << "Contains nearby duplicate for nums1: " << sol.containsNearbyDuplicate(nums1, k1) << endl;

    vector<int> nums2 = {1, 0, 1, 1};
    int k2 = 1;
    cout << "Contains nearby duplicate for nums2: " << sol.containsNearbyDuplicate(nums2, k2) << endl;

    vector<int> nums3 = {1, 2, 3, 1, 2, 3};
    int k3 = 2;
    cout << "Contains nearby duplicate for nums3: " << sol.containsNearbyDuplicate(nums3, k3) << endl;

    return 0;
}
