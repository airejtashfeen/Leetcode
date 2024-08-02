#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.empty()) return result;
        
        int start = nums[0];
        
        for (int i = 1; i <= nums.size(); ++i) {
            if (i < nums.size() && nums[i] == nums[i-1] + 1) {
                continue;
            }
            if (start == nums[i-1]) {
                result.push_back(to_string(start));
            } else {
                result.push_back(to_string(start) + "->" + to_string(nums[i-1]));
            }
            if (i < nums.size()) {
                start = nums[i];
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {0, 1, 2, 4, 5, 7};
    vector<string> result1 = sol.summaryRanges(nums1);
    cout << "Ranges for nums1: ";
    for (const string& range : result1) {
        cout << range << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> nums2 = {0, 2, 3, 4, 6, 8, 9};
    vector<string> result2 = sol.summaryRanges(nums2);
    cout << "Ranges for nums2: ";
    for (const string& range : result2) {
        cout << range << " ";
    }
    cout << endl;

    // Test case 3
    vector<int> nums3 = {-1};
    vector<string> result3 = sol.summaryRanges(nums3);
    cout << "Ranges for nums3: ";
    for (const string& range : result3) {
        cout << range << " ";
    }
    cout << endl;

    return 0;
}
