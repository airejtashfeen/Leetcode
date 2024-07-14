#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0; 
        if (nums[n - 1] > nums[n - 2]) return n - 1; 

        int low = 1; 
        int high = n - 2;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;

            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1; 
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 1, 3, 5, 6, 4};
    vector<int> nums2 = {2, 1};
    
    int peakIndex1 = sol.findPeakElement(nums1);
    cout << "The peak element in the first array is at index: " << peakIndex1 << endl;

    int peakIndex2 = sol.findPeakElement(nums2);
    cout << "The peak element in the second array is at index: " << peakIndex2 << endl;

    return 0;
}
