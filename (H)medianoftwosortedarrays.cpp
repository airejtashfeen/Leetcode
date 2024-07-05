#include <iostream>
#include <vector>
using namespace std;

//FOR UNDERSTANDING THE SOLUTION, SEE MEDIANOFTWOSORTEDARRAYS.PNG OR CONTACT
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 > n2) return findMedianSortedArrays(nums2, nums1);
        int low = 0; 
        int high = n1;
        int combinedLength = n1 + n2;
        int left = (n1 + n2 + 1) / 2;
        
        while (low <= high) {
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            int mid1 = low + (high - low) / 2;
            int mid2 = left - mid1;
            
            if (mid1 < n1) r1 = nums1[mid1];
            if (mid2 < n2) r2 = nums2[mid2];
            if (mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
            if (mid2 - 1 >= 0) l2 = nums2[mid2 - 1];
            
            if (l1 <= r2 && l2 <= r1) {
                if (combinedLength % 2 == 1) {
                    return max(l1, l2);
                }
                return (double)(max(l1, l2) + min(r1, r2)) / 2;
            } else if (l2 > r1) {
                low = mid1 + 1;
            } else {
                high = mid1 - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "Median of nums1 and nums2: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    vector<int> nums3 = {1, 2};
    vector<int> nums4 = {3, 4};
    cout << "Median of nums3 and nums4: " << sol.findMedianSortedArrays(nums3, nums4) << endl;

    vector<int> nums5 = {0, 0};
    vector<int> nums6 = {0, 0};
    cout << "Median of nums5 and nums6: " << sol.findMedianSortedArrays(nums5, nums6) << endl;

    vector<int> nums7 = {};
    vector<int> nums8 = {1};
    cout << "Median of nums7 and nums8: " << sol.findMedianSortedArrays(nums7, nums8) << endl;

    vector<int> nums9 = {2};
    vector<int> nums10 = {};
    cout << "Median of nums9 and nums10: " << sol.findMedianSortedArrays(nums9, nums10) << endl;

    return 0;
}
