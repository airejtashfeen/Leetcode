#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;

        int longest=1;

        unordered_set<int> hashSet (nums.begin(), nums.end());

        for(int i: nums){
            if(hashSet.find(i-1) == hashSet.end()){
                int currentNo=i;
                int currentSequence= 1;

                while(hashSet.find(currentNo+1)!= hashSet.end()){
                    currentNo++;
                    currentSequence++;
                }

                longest = max (longest, currentSequence);
            }
        }
        return longest;
    }

};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = sol.longestConsecutive(nums);
    cout << "Longest consecutive sequence length: " << result << endl;

    return 0;
}
