#include <iostream>
#include <cmath> // For abs and numeric_limits

class Solution {
private:
    double computePower(double x, long long n) { 
        
        if (n == 0) return 1;
        if (n % 2 == 0) {
            double half = computePower(x * x, n / 2);
            return half;
        } else {
            double half = computePower(x * x, (n - 1) / 2);
            return x * half;
        }
    }

public:
    double myPow(double x, int n) {
        if (n == INT_MIN) {
            return myPow(x, n / 2) * myPow(x, n / 2);
        }
        if (n < 0) {
            x = 1 / x;
            n = abs(n);
        }
        return computePower(x, n);
    }
};

int main() {
    Solution sol;

    // Test cases
    double x1 = 2.0;
    int n1 = 10;
    std::cout << "2^10 = " << sol.myPow(x1, n1) << std::endl; // Should output 1024

    double x2 = 2.0;
    int n2 = -2;
    std::cout << "2^-2 = " << sol.myPow(x2, n2) << std::endl; // Should output 0.25

    double x3 = 0.5;
    int n3 = 3;
    std::cout << "0.5^3 = " << sol.myPow(x3, n3) << std::endl; // Should output 0.125

    double x4 = 3.0;
    int n4 = 0;
    std::cout << "3^0 = " << sol.myPow(x4, n4) << std::endl; // Should output 1

    double x5 = 5.0;
    int n5 = 1;
    std::cout << "5^1 = " << sol.myPow(x5, n5) << std::endl; // Should output 5

    // Edge case
    double x6 = 1.00000;
    int n6 = -2147483648; // INT_MIN
    std::cout << "1.00000^-2147483648 = " << sol.myPow(x6, n6) << std::endl; // Should handle edge case correctly

    return 0;
}
