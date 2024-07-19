#include <vector>
#include <iostream>

using namespace std;

class Solution {
private:
    int countOfSubarrays(int start, int k, vector<int>& nums) {
        if (start >= nums.size()) {
            return 0;
        }

        int count = 0;
        int currentSum = 0;
       
        for (int i = start; i < nums.size(); i++) {
            currentSum += nums[i];
            if (currentSum == k) {
                count++;
            }
        }
        return count + countOfSubarrays(start + 1, k, nums);
    }
public:
    int subarraySum(vector<int>& nums, int k) {
        return countOfSubarrays(0, k, nums);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1}; // Example input
    int k = 2;
    cout << sol.subarraySum(nums, k) << endl; // Output should be 2

    return 0;
}
