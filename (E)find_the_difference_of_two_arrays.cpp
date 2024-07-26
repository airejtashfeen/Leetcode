#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> ans1;
        vector<int> ans2;
        
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                ans1.push_back(num);
            }
        }
        
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                ans2.push_back(num);
            }
        }
        
        return {ans1, ans2};
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 3};
    vector<int> nums2 = {3, 4, 5, 5};

    vector<vector<int>> result = solution.findDifference(nums1, nums2);

    cout << "Unique to nums1: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Unique to nums2: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
