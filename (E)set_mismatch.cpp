#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> result(2, 0); 

        for (int num : nums) {
            if (seen.count(num)) { //Checks if there are repeating
                result[0] = num; 
            } else {
                seen.insert(num);
            }
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (seen.count(i) == 0) {
                //Count i would be 0 for the value that doesn't exist
                result[1] = i; 
                break;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 4}; // Example input

    vector<int> result = sol.findErrorNums(nums);
    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}
