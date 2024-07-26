#include <iostream>
#include <vector>
#include <algorithm> // For printing the result

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size() < nums1.size()) {
            return intersect(nums2, nums1); 
        }

        vector<int> ans;
        unordered_map<int, int> hashMap;

        for (int num : nums1) {
            hashMap[num]++;
        }

        for (int num : nums2) {
            if (hashMap.find(num) != hashMap.end() && hashMap[num] > 0) {
                ans.push_back(num);
                hashMap[num]--; 
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = sol.intersect(nums1, nums2);

    cout << "Intersection of nums1 and nums2: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
