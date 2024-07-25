#include <iostream>
#include <vector>
#include <algorithm> // For min

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;

        int num2 = 0, num3 = 0, num5 = 0;
        int next2 = 2, next3 = 3, next5 = 5;

        for (int i = 1; i < n; i++) {
            int minNumber = min(next2, min(next3, next5));
            dp[i] = minNumber;

            if (minNumber == next2) {
                num2++;
                next2 = dp[num2] * 2;
            }

            if (minNumber == next3) {
                num3++;
                next3 = dp[num3] * 3;
            }

            if (minNumber == next5) {
                num5++;
                next5 = dp[num5] * 5;
            }
        }

        return dp[n - 1];
    }
};

int main() {
    Solution sol;
    int n = 10; // Change this to any desired value of n
    cout << "The " << n << "th ugly number is: " << sol.nthUglyNumber(n) << endl;
    return 0;
}
