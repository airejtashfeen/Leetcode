#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int num = numeric_limits<int>::max();

        for (int i = 0; i < nums.size(); ++i) {
            if (abs(nums[i]) <= abs(num)) {
                num = nums[i];
            }
        }
        return num;
    }
};

int main() {
    vector<int> nums = {-4, -2, 1, 4, 8}; // Example input
    Solution solution;
    int closestNumber = solution.findClosestNumber(nums);
    cout << "Closest number to 0: " << closestNumber << endl; // Output
    return 0;
}