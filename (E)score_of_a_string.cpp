#include <iostream>
#include <string>
#include <cstdlib>

class Solution {
public:
    int scoreOfString(const std::string& s) {
        int score = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            score += std::abs(int(s[i]) - int(s[i + 1]));
        }
        return score;
    }
};

int main() {
    Solution solution;

    std::string test1 = "abc";
    int result1 = solution.scoreOfString(test1);
    std::cout << "Test Case 1: " << result1 << std::endl;

    std::string test2 = "xyz";
    int result2 = solution.scoreOfString(test2);
    std::cout << "Test Case 2: " << result2 << std::endl;

    std::string test3 = "abcd";
    int result3 = solution.scoreOfString(test3);
    std::cout << "Test Case 3: " << result3 << std::endl;

    std::string test4 = "az";
    int result4 = solution.scoreOfString(test4);
    std::cout << "Test Case 4: " << result4 << std::endl;

    return 0;
}
