#include <iostream>
using namespace std;

// Mock implementation of isBadVersion for testing purposes
bool isBadVersion(int version) {
    // Example logic for testing
    // Assume version 4 and above are bad versions
    return version >= 4;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }
        
        return left;
    }
};

int main() {
    Solution solution;
    int n = 5; // Example total number of versions

    // Call the method and print the result
    int result = solution.firstBadVersion(n);
    cout << "The first bad version is: " << result << endl;

    return 0;
}
