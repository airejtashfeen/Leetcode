#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;

        for (int num : nums) {
            ++hashMap[num];
        }

        for (auto& pair : hashMap) {
            if (pair.second >= 2) {
                return pair.first;
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = sol.findDuplicate(nums);

    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
