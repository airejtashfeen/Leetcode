#include <iostream>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        while (n % 4 == 0) {
            n /= 4;
        }
        return n == 1;
    }
};

int main() {
    Solution solution;
    int testValue;
    std::cout << "Enter a number: ";
    std::cin >> testValue;
    bool result = solution.isPowerOfFour(testValue);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}
