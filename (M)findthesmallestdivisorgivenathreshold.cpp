#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
private:
int calculateSum(vector<int>& nums, int mid){
    int sum=0;
    for(int i=0; i< nums.size(); i++){
        //Replacement for ceil function
       sum = sum +  (nums[i]+ mid-1)/mid;
    }

    return sum;
}
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high= *max_element(nums.begin(), nums.end());
        int ans=0;

        while(low<=high){
            int mid= low + (high-low)/2;
            int currentSum= calculateSum(nums, mid);

            if(currentSum<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    
    int result = solution.smallestDivisor(nums, threshold);
    cout << "Smallest divisor: " << result << endl;
    
    return 0;
}
