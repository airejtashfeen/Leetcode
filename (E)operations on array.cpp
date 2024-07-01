#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int j = n - 1;

        for (int i = 0; i < j; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
                i++; // Increment i to skip the next element since it is set to zero
            }
        }

        int zerosCount = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[zerosCount], nums[i]);
                zerosCount++;
            }
        }

//        for (int i = zerosCount; i < n; i++) {
//            nums[i] = 0;
//        }

        return nums;
    }
};

int main() {
    vector<int> nums;
    int num;

    cout << "Enter values for your array (enter -1 to finish): ";
    cin >> num;
    while (num != -1) {
        nums.push_back(num);
        cin >> num;
    }

    Solution s;
    vector<int> ans = s.applyOperations(nums);

    cout << "The resulting array is: ";
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
