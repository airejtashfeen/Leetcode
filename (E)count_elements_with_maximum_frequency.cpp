#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hashmap;
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            hashmap[nums[i]]++;
            maxi = max(maxi, hashmap[nums[i]]);
        }
      
        int count = 0;

        for (auto& pair : hashmap) {
            if (pair.second == maxi) {
                count += pair.second; 
            }
        }
        
        return count;
    }
};

// Example usage
int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4};
    Solution sol;
    int count = sol.maxFrequencyElements(nums);

    cout << "Total frequencies of elements with maximum frequency: " << count << endl;

    return 0;
}
