#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size() < nums1.size()) {
            return intersection(nums2, nums1);
        }

        unordered_set<int> hashSet;
        vector<int> ans;

        for (int num : nums1) {
            hashSet.insert(num);
        }

        unordered_set<int> seen;
        
        for (int num : nums2) {
            if (hashSet.find(num) != hashSet.end() && seen.find(num) == seen.end()) {
                ans.push_back(num);
                seen.insert(num); 
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    // Get intersection
    vector<int> result = sol.intersection(nums1, nums2);

    // Output result
    std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
