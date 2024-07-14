#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true; 
            }
        }
        return false; 
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 1}; // Example test case
    bool result = solution.containsDuplicate(nums);
    cout << "Contains duplicate: " << (result ? "Yes" : "No") << endl;
    return 0;
}
