#include <iostream>

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return !(n % 4 == 0);
    }
};

int main() {
    Solution sol;

    // Test cases
    int test1 = 4;   // Expected output: false (the player cannot win if n is 4)
    int test2 = 5;   // Expected output: true (the player can win if n is 5)
    int test3 = 8;   // Expected output: false (the player cannot win if n is 8)
    int test4 = 10;  // Expected output: true (the player can win if n is 10)

    // Test and display results
    cout << "Can win with " << test1 << " stones: " << (sol.canWinNim(test1) ? "Yes" : "No") << endl;
    cout << "Can win with " << test2 << " stones: " << (sol.canWinNim(test2) ? "Yes" : "No") << endl;
    cout << "Can win with " << test3 << " stones: " << (sol.canWinNim(test3) ? "Yes" : "No") << endl;
    cout << "Can win with " << test4 << " stones: " << (sol.canWinNim(test4) ? "Yes" : "No") << endl;

    return 0;
}
