#include <iostream>

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int original = x;
        int sumOfDigits = 0;
        
        while (x > 0) {
            sumOfDigits += x % 10;
            x = x / 10;
        }
        
        if (original % sumOfDigits == 0) {
            return sumOfDigits;
        } else {
            return -1;
        }
    }
};

int main() {
    Solution solution;
    
    int test1 = 18;
    int result1 = solution.sumOfTheDigitsOfHarshadNumber(test1);
    std::cout << "Test Case 1: " << result1 << std::endl;
    
    int test2 = 19;
    int result2 = solution.sumOfTheDigitsOfHarshadNumber(test2);
    std::cout << "Test Case 2: " << result2 << std::endl;
    
    int test3 = 10;
    int result3 = solution.sumOfTheDigitsOfHarshadNumber(test3);
    std::cout << "Test Case 3: " << result3 << std::endl;
    
    int test4 = 22;
    int result4 = solution.sumOfTheDigitsOfHarshadNumber(test4);
    std::cout << "Test Case 4: " << result4 << std::endl;

    return 0;
}
