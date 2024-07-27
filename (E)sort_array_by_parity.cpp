#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n= nums.size();
        int left=0;
        int right= n-1;

        while(left<=right){
            if(nums[right]%2!=0){
                right--;
            }
            else if(nums[left]%2==0){
            left++;
            }
            else{
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {3, 1, 2, 4};
    std::vector<int> sorted = sol.sortArrayByParity(nums);

    for (int num : sorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
