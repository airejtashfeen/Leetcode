#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0] + nums[1] <= nums[2]) return "none";
        if(nums[0] == nums[1] && nums[1] == nums[2]) return "equilateral";
        if(nums[0] == nums[1] || nums[1] == nums[2]) return "isosceles";
        return "scalene";
    }
};

int main() {
    vector<int> nums = {3, 3, 3};
    Solution solution;
    string result = solution.triangleType(nums);
    cout << result << endl; // Output: equilateral

    nums = {3, 4, 5};
    result = solution.triangleType(nums);
    cout << result << endl; // Output: scalene

    nums = {2, 2, 5};
    result = solution.triangleType(nums);
    cout << result << endl; // Output: isosceles

    nums = {1, 2, 4};
    result = solution.triangleType(nums);
    cout << result << endl; // Output: none

    return 0;
}