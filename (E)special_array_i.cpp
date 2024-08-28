#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]%2==0 && nums[i+1]%2==0 || nums[i]%2!=0 && nums[i+1]%2!=0) return false;
        }

        return true;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {2, 4, 6, 8};
    vector<int> nums3 = {1, 3, 5, 7, 9};

    Solution solution;
    bool result1 = solution.isArraySpecial(nums1);
    bool result2 = solution.isArraySpecial(nums2);
    bool result3 = solution.isArraySpecial(nums3);

    cout << result1 << endl; // Output: false
    cout << result2 << endl; // Output: true
    cout << result3 << endl; // Output: true

    return 0;
}