#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int counter=0;
    for (int i = 0; i < nums.size(); i++) {
     if(nums[i]==val){
        nums.erase(nums.begin()+ i);
        i--;
     }
}
int ans= nums.size();
return ans;
}
};
int main(){
vector<int>nums;
int num,val;
Solution s;
cout<<"Enter values for your array:";
cin>>num;
while(num!=-1){
    nums.push_back(num);
    cin>>num;
}
for(int i:nums){
    cout<<i<<" ";
}
cout<<"Enter valueto be deleted from the array:";
cin>>val;


for(int i:nums){
    cout<<i<<" ";
}
int ans= s.removeElement(nums,val);
cout<<"\nThe number of elements not same is:"<<ans;
}


