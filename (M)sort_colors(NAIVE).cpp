#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int redCount = 0;
        int whiteCount = 0;
        int blueCount = 0;

        // Count the occurrences of each color
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                redCount++;
            } else if(nums[i] == 1) {
                whiteCount++;
            } else if(nums[i] == 2) {
                blueCount++;
            }
        }

        // Clear the vector
        nums.clear();

        // Add 0s
        for(int i = 0; i < redCount; i++) {
            nums.push_back(0);
        }

        // Add 1s
        for(int i = 0; i < whiteCount; i++) {
            nums.push_back(1);
        }

        // Add 2s
        for(int i = 0; i < blueCount; i++) {
            nums.push_back(2);
        }
    }
};

// Main function for testing
int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0}; // Example input

    solution.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
