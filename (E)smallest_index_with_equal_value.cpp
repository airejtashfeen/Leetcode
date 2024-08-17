#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i%10== nums[i]){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums1 = {0, 1, 2};  // Test case where the answer should be 0
    vector<int> nums2 = {4, 3, 2, 1};  // Test case where no index satisfies the condition
    vector<int> nums3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};  // Test case where the answer should be 9
    
    cout << "Test Case 1: " << solution.smallestEqual(nums1) << endl;
    cout << "Test Case 2: " << solution.smallestEqual(nums2) << endl;
    cout << "Test Case 3: " << solution.smallestEqual(nums3) << endl;
    
    return 0;
}
