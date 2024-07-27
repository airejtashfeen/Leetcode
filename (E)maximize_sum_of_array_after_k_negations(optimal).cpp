#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>

using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>minHeap(nums.begin(), nums.end());
        for(int i=0; i<k; i++){
            int smallest= minHeap.top();
            minHeap.pop();
            minHeap.push(-smallest);
        }
            int sum=0;
          while (!minHeap.empty()) {
            sum += minHeap.top();
            minHeap.pop();
        }
        
        return sum;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {4, 2, 3};
    int k = 1;
    cout << sol.largestSumAfterKNegations(nums, k) << endl; // Output: 5

    vector<int> nums2 = {3, -1, 0, 2};
    int k2 = 3;
    cout << sol.largestSumAfterKNegations(nums2, k2) << endl; // Output: 6

    vector<int> nums3 = {2, -3, -1, 5, -4};
    int k3 = 2;
    cout << sol.largestSumAfterKNegations(nums3, k3) << endl; // Output: 13

    return 0;
}
