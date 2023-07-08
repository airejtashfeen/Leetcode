#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No sum found
    }
};

int main() {
    int Size, check;
    cout << "Enter the size of the array: ";
    cin >> Size;

    vector<int> nums(Size);
    cout << "Enter elements for your array: ";
    for (int i = 0; i < Size; i++) {
        cin >> nums[i];
    }

    cout << "Enter the number that you want to check: ";
    cin >> check;

    Solution sol;
    vector<int> result = sol.twoSum(nums, check);
    if (!result.empty()) {
        cout << "[" << result[0] << "," << result[1] << "]";
    } else {
        cout << "\nSum not found";
    }
    return 0;
}
