

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end());
        
        if (hashSet.size() < 3) {
            return *std::max_element(hashSet.begin(), hashSet.end());
        }

        vector<int> sortedVec(hashSet.begin(), hashSet.end());
        sort(sortedVec.begin(), sortedVec.end()); // Ascending order

        return sortedVec[sortedVec.size() - 3]; // Third last element
    }
};

int main() {
    // Sample test cases
    Solution sol;
    
    vector<int> nums1 = {3, 2, 1};
    cout << "Third maximum in nums1: " << sol.thirdMax(nums1) << endl; // Expected output: 1
    
    vector<int> nums2 = {1, 2};
    cout << "Third maximum in nums2: " << sol.thirdMax(nums2) << endl; // Expected output: 2
    
    vector<int> nums3 = {1, 2, 2, 3, 3};
    cout << "Third maximum in nums3: " << sol.thirdMax(nums3) << endl; // Expected output: 1
    
    vector<int> nums4 = {5, 2, 2, 1, 6, 7};
    cout << "Third maximum in nums4: " << sol.thirdMax(nums4) << endl; // Expected output: 5

    return 0;
}

