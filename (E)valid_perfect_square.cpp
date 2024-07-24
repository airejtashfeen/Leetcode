#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false; // Handle negative numbers
        if (num <= 1) return true; 

        int low = 1, high = num;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long midSquared = (long long)mid * mid;

            if (midSquared == num) {
                return true;
            } else if (midSquared < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    Solution solution;

    // Test cases
    int testValues[] = {0, 1, 4, 9, 16, 25, 2, 5, 10, 20};
    for (int num : testValues) {
        bool result = solution.isPerfectSquare(num);
        cout << "Is " << num << " a perfect square? " << (result ? "Yes" : "No") << endl;
    }

    return 0;
}
