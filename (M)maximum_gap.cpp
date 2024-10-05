#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0; 
        }

        sort(nums.begin(), nums.end());

        int maxGap = 0;
        
        for (int i = 0; i < nums.size() - 1; ++i) {
            int currentGap = nums[i + 1] - nums[i];
            if (currentGap > maxGap) {
                maxGap = currentGap;
            }
        }
        
        return maxGap;
    }
};

int main() {
    Solution solution;
    
    // Example test case
    vector<int> nums = {3, 6, 9, 1};
    
    int result = solution.maximumGap(nums);
    cout << "The maximum gap is: " << result << endl;
    
    return 0;
}
