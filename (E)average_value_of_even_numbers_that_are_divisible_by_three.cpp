#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0, sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                sum += nums[i];
                count++;
            }
        }

        if (count > 0) {
            return sum / count;
        } else {
            return 0;
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 6, 9}; // Replace with your desired input
    Solution solution;
    int average = solution.averageValue(nums);
    cout << "Average value: " << average << endl;
    return 0;
}