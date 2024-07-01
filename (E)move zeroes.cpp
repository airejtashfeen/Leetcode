#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int endd= nums.size();
    int zeroCount=0;
    for(int i=0; i<endd; i++){
        if(nums[i]!=0){
            swap(nums[zeroCount], nums[i]);
            zeroCount++;
        }
    }

    for(int i: nums){
        cout<<i<<" ";
    }

    }
};
int main() {
    vector<int> nums;
    int num;

    cout << "Enter values for your array (enter -1 to finish): ";
    cin >> num;
    while (num != -1) {
        nums.push_back(num);
        cin >> num;
    }

    Solution s;
s.moveZeroes(nums);
}
