#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        vector<double>ans;
        for(int i=0; i<n; i++){
            if(i<n/2){
                ans.push_back((nums[i]+ nums[n-i-1])/2.0);
            }
        }
        double res= *min_element(ans.begin(), ans.end());
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution solution;
    double result = solution.minimumAverage(nums);
    cout << "Minimum average: " << result << endl; 

    return 0;
}