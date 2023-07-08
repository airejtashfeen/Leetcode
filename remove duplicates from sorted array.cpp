#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] == nums[j]) {
            nums.erase(nums.begin() + j);
            j--; // Decrement j since the vector size has changed
        }
    }
}
    return nums.size();
    }
};
int main(){
vector<int>nums;
int num;
Solution s;
cout<<"Enter values for your array:";
cin>>num;
while(num!=-1){
    nums.push_back(num);
    cin>>num;
}
cout<<"\nThe size of the vector initially is:"<<nums.size();
cout<<endl;

for(int i:nums){
    cout<<i<<" ";
}
int ans= s.removeDuplicates(nums);
cout<<"\nThe size of the vector now is:"<<ans;
}

