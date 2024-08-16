#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> hashSet;

        for (int num : nums) {
            if (num > 0) {
                hashSet.insert(num);
            }
        }

        int i = 1;
        while (true) {
            if (hashSet.find(i) == hashSet.end()) {
                return i;
            }
            ++i;
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 4, -1, 1};
    int result = solution.firstMissingPositive(nums);
    cout << "The first missing positive integer is: " << result << endl;
    return 0;
}
