#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_set<int> hashSet(nums.begin(), nums.end());

        for (int num : hashSet) {
            minHeap.push(num);
            if (minHeap.size() > 3) {
                minHeap.pop();
            }
        }

        return minHeap.size() == 3 ? minHeap.top() : *std::max_element(nums.begin(), nums.end());
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
