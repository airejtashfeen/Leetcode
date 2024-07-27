#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {-4, -1, 0, 3, 10};

    // Get the sorted squares
    vector<int> result = sol.sortedSquares(nums);

    // Print the result
    cout << "Sorted squares: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
