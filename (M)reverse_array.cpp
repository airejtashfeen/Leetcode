#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1 || k % n == 0) return;

        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // Example vector
    int k = 3; // Number of positions to rotate
    
    sol.rotate(nums, k);
    
    // Print the rotated vector
    cout << "Rotated vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
