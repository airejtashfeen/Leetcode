#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            swap(nums[i], nums[i+1]);
            i++;
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    Solution solution;
    vector<int> result = solution.numberGame(nums);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}