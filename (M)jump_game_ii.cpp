#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return 0;

        int currentEnd=0;
        int farthest=0;
        int jumps=0;

        for(int i=0; i<n-1; ++i){
            farthest= max(farthest, i+ nums[i]);
            
            if(i==currentEnd){
                ++jumps;
                currentEnd=farthest;
            }
        }
        return jumps;
    }
};

int main(){
    Solution sol;

    vector<int>nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);

    cout<<"The number of minimum jumps to reach the end is:"<< sol.jump(nums)<<endl;
}