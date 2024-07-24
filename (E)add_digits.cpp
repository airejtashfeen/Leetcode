#include <iostream>

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
     
            while (num > 0) {
                sum += num % 10; 
                num /= 10; 
            }
            num = sum; 
        }
        return num; 
    }
};

int main() {
    Solution solution;
    
    // Test cases
    int test1 = 38;
    int test2 = 123;
    int test3 = 9999;
    int test4 = 5; // Single digit
    
    std::cout << "addDigits(" << test1 << ") = " << solution.addDigits(test1) << std::endl;
    std::cout << "addDigits(" << test2 << ") = " << solution.addDigits(test2) << std::endl;
    std::cout << "addDigits(" << test3 << ") = " << solution.addDigits(test3) << std::endl;
    std::cout << "addDigits(" << test4 << ") = " << solution.addDigits(test4) << std::endl;

    return 0;
}
