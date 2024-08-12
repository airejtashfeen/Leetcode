#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        int closestSum = INT_MAX;
        int closestDifference = INT_MAX;
        
        for (int i = 0; i < nums.size() - 2; i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    int currentSum = nums[i] + nums[j] + nums[k];
                    int currentDifference = abs(currentSum - target);
                    
                    if (currentDifference < closestDifference) {
                        closestDifference = currentDifference;
                        closestSum = currentSum;
                    }
                }
            }
        }
        
        return closestSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = sol.threeSumClosest(nums, target);

    cout << "The closest sum to the target is: " << result << endl;

    return 0;
}
