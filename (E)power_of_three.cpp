#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n > 0 && 1162261467 % n == 0);
    }
};

int main() {
    Solution sol;

    // Test cases
    int test1 = 1;   // 3^0
    int test2 = 3;   // 3^1
    int test3 = 9;   // 3^2
    int test4 = 27;  // 3^3
    int test5 = 10;  // Not a power of 3
    int test6 = 81;  // 3^4
    int test7 = 0;   // Not a power of 3
    int test8 = -27; // Not a power of 3

    cout << "Is " << test1 << " a power of three? " << (sol.isPowerOfThree(test1) ? "Yes" : "No") << endl;
    cout << "Is " << test2 << " a power of three? " << (sol.isPowerOfThree(test2) ? "Yes" : "No") << endl;
    cout << "Is " << test3 << " a power of three? " << (sol.isPowerOfThree(test3) ? "Yes" : "No") << endl;
    cout << "Is " << test4 << " a power of three? " << (sol.isPowerOfThree(test4) ? "Yes" : "No") << endl;
    cout << "Is " << test5 << " a power of three? " << (sol.isPowerOfThree(test5) ? "Yes" : "No") << endl;
    cout << "Is " << test6 << " a power of three? " << (sol.isPowerOfThree(test6) ? "Yes" : "No") << endl;
    cout << "Is " << test7 << " a power of three? " << (sol.isPowerOfThree(test7) ? "Yes" : "No") << endl;
    cout << "Is " << test8 << " a power of three? " << (sol.isPowerOfThree(test8) ? "Yes" : "No") << endl;

    return 0;
}
