#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>   
 hashSet(nums.begin(), nums.end());

        while (hashSet.count(original)) {
            original *= 2;
        }

        return original;
    }
};

int main() {
    vector<int> nums = {5, 3, 6, 1, 12}; // Example input
    int original = 2;

    Solution solution;
    int finalValue = solution.findFinalValue(nums, original);

    cout << "Final value: " << finalValue << endl; // Output

    return 0;
}