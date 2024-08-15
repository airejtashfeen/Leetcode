#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        int sum = 0;

        for (int num : nums) {
            ++hashMap[num];
        }

        for (auto& pair : hashMap) {
            if (pair.second == 1) {
                sum += pair.first;
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 2, 3, 2, 1, 4, 5};
    int result = sol.sumOfUnique(nums);

    cout << "Sum of unique elements: " << result << endl;

    return 0;
}
