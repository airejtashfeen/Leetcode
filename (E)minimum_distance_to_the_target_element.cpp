#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]== target){
                ans=  min(ans, abs(i-start));
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {1, 3, 4, 7, 8, 3, 6}; // Example vector
    int target = 3;
    int start = 4;
    
    int result = sol.getMinDistance(nums, target, start);
    
    std::cout << "The minimum distance is: " << result << std::endl;
    
    return 0;
}
