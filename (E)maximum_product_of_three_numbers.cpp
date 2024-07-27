#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n= nums.size();

        sort(nums.begin(), nums.end());

        int ans1=0;
        int ans2=0;
        if(n<3){
            return -1;
        }
        
        ans1= (nums[0]* nums[1]* nums[n-1]);
        ans2= (nums[n-1]* nums[n-2]* nums[n-3]);

        return max(ans1, ans2);
    }
};

int main() {
    // Example input
    vector<int> nums = {1, 2, 3, 4, 5};

    // Create an instance of Solution
    Solution sol;

    // Get the maximum product of any three numbers
    int result = sol.maximumProduct(nums);

    // Print the result
    cout << "The maximum product of any three numbers is: " << result << endl;

    return 0;
}
