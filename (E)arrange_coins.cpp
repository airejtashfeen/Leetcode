#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    int arrangeCoins(int n) {
        int low = 0, high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long curr = (long)mid * (mid + 1) / 2;

            if (curr == n) {
                return mid;
            }
            if (curr < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};

int main() {
    Solution solution;
    std::vector<int> testCases = {5, 8, 0, 1, 10, 15};

    for (int n : testCases) {
        std::cout << "Number of coins: " << n << "\n";
        std::cout << "Number of complete rows: " << solution.arrangeCoins(n) << "\n\n";
    }

    return 0;
}
