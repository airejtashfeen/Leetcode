#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> count;   

        int maxCount = 0, result = 0;

        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == key) {
                count[nums[i + 1]]++;
                if (count[nums[i + 1]] > maxCount) {
                    maxCount = count[nums[i + 1]];
                    result = nums[i + 1];
                }
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums = {1, 100, 200, 1, 100};
    int key = 1;

    Solution solution;
    int mostFrequentElement = solution.mostFrequent(nums, key);

    cout << "Most frequent element: " << mostFrequentElement << endl;

    return 0;
}