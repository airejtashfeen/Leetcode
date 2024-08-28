#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int count1 = 0;
        int count2 = 0;
        
        for (auto i : nums1) {
            if (find(nums2.begin(), nums2.end(), i) != nums2.end()) count1++;
        }

        for (auto i : nums2) {
            if (find(nums1.begin(), nums1.end(), i) != nums1.end()) count2++;
        }

        return {count1, count2};
    }
};

int main() {
    // Create an instance of Solution
    Solution solution;

    // Test case 1
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    // Call the method and store the result
    vector<int> result = solution.findIntersectionValues(nums1, nums2);

    // Print the result
    cout << "Intersection counts: [" << result[0] << ", " << result[1] << "]" << endl;

    // Additional test case
    vector<int> nums3 = {4, 9, 5};
    vector<int> nums4 = {9, 4, 9, 8, 4};

    result = solution.findIntersectionValues(nums3, nums4);

    // Print the result for the additional test case
    cout << "Intersection counts: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
