#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        int j = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        while (j < nums.size()) {
            if ((nums[j] > mini) && (nums[j] < maxi)) count++;
            j++;
        }

        return count;   

    }
};

int main() {
    vector<int> nums = {1, 2, 3}; // Replace with your desired input
    Solution solution;
    int result = solution.countElements(nums);
    cout << result << endl; // Output: 2
    return 0;
}
Use code with caution.

