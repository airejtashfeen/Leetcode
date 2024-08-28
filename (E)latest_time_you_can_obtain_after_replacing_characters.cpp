#include <iostream>
#include <string>

class Solution {
public:
    std::string findLatestTime(std::string s) {
        if (s[0] == '?') {
            if (s[1] != '0' && s[1] != '1' && s[1] != '?')
                s[0] = '0';
            else 
                s[0] = '1';
        }
        
        if (s[1] == '?') {
            if (s[0] == '1')
                s[1] = '9';
            else
                s[1] = '9';
        }
        
        if (s[3] == '?')
            s[3] = '5';
        if (s[4] == '?')
            s[4] = '9';
        
        return s;
    }
};

int main() {
    Solution solution;
    
    std::string test1 = "1?:5?";
    std::cout << "Test Case 1: " << solution.findLatestTime(test1) << std::endl;
    
    std::string test2 = "0?:0?";
    std::cout << "Test Case 2: " << solution.findLatestTime(test2) << std::endl;
    
    std::string test3 = "2?:?0";
    std::cout << "Test Case 3: " << solution.findLatestTime(test3) << std::endl;
    
    std::string test4 = "?4:??";
    std::cout << "Test Case 4: " << solution.findLatestTime(test4) << std::endl;

    return 0;
}
