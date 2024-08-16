#include <iostream>

using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 != 0) {
            return n * 2;
        } else {
            return n;
        }
    }
};

int main() {
    Solution solution;

    // Example 1
    int n1 = 5;
    cout << "Smallest even multiple of " << n1 << " is: " << solution.smallestEvenMultiple(n1) << endl;

    // Example 2
    int n2 = 6;
    cout << "Smallest even multiple of " << n2 << " is: " << solution.smallestEvenMultiple(n2) << endl;

    // Example 3
    int n3 = 1;
    cout << "Smallest even multiple of " << n3 << " is: " << solution.smallestEvenMultiple(n3) << endl;

    return 0;
}
