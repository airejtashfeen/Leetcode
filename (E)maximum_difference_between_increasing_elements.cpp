#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1; 
        int maxAns = -1; 

        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                ans = nums[j] - nums[i];
                if(ans > 0) { 
                    maxAns = max(maxAns, ans);
                }
            }
        }
        return maxAns;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {7, 1, 5, 4}; // Example input
    int result = solution.maximumDifference(nums);
    cout << "Maximum Difference: " << result << endl;
    return 0;
}
