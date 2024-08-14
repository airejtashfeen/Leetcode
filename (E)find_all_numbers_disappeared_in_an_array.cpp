#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end());
        vector<int> result;

        for (int i = 1; i <= nums.size(); ++i) {
            if (hashSet.find(i) == hashSet.end()) {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 6, 5, 1}; 
    vector<int> missingNumbers = sol.findDisappearedNumbers(nums);
    
    cout << "Missing numbers: ";
    for (int num : missingNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
