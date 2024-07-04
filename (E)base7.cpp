#include <iostream>
#include <string>

class Solution {
public:
    std::string convertToBase7(int num) {
        if (num == 0) return "0";
        
        bool isNegative = num < 0;
        std::string result = "";
        int absNum = std::abs(num);

        while (absNum > 0) {
            int remainder = absNum % 7;
            result = std::to_string(remainder) + result;
            absNum /= 7;
        }
        
        if (isNegative) {
            result = "-" + result;
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    int number1 = 100;
    int number2 = -3;
    
    std::cout << "Base-7 representation of " << number1 << " is: " << solution.convertToBase7(number1) << std::endl;
    std::cout << "Base-7 representation of " << number2 << " is: " << solution.convertToBase7(number2) << std::endl;
    
    return 0;
}
