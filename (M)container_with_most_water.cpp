#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int area = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            area = max(area, h * width);
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            } 
        }
        return area;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> heights1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max Area (Test Case 1): " << sol.maxArea(heights1) << endl; // Expected output: 49

    // Test case 2
    vector<int> heights2 = {1, 1};
    cout << "Max Area (Test Case 2): " << sol.maxArea(heights2) << endl; // Expected output: 1

    // Test case 3
    vector<int> heights3 = {4, 3, 2, 1, 4};
    cout << "Max Area (Test Case 3): " << sol.maxArea(heights3) << endl; // Expected output: 16

    // Test case 4
    vector<int> heights4 = {1, 2, 1};
    cout << "Max Area (Test Case 4): " << sol.maxArea(heights4) << endl; // Expected output: 2

    return 0;
}
