#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n= nums.size();

        map<int,int>hashMap;

        for(int i=0; i<n; i++){
            hashMap[nums[i]]++;
        }

        for(int i=1; i<=n-2; i++){
            if(hashMap[i]!= 1) return false;
        }

        return hashMap[n-1]==2;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 5}; // Example input vector
    bool result = Solution().isGood(nums);
    cout << "Is the array good? " << (result ? "Yes" : "No") << endl;
    return 0;
}