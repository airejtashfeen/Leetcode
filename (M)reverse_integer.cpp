#include <iostream>
#include <string>
#include <algorithm> // For std::reverse
#include <climits>   // For INT_MAX and INT_MIN

class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        std::string str = std::to_string(x);
        if (str[0] == '-') {
            flag = true;
            str = str.substr(1, str.length() - 1);
        }
        std::reverse(str.begin(), str.end());

        int ans = 0;
        try {
            ans = std::stoi(str);
        } catch (std::out_of_range& e) {
            return 0; // Overflow case
        }

        if (flag) {
            ans = -ans;
        }

        return ans;
    }
};

int main() {
    Solution solution;
    std::cout << solution.reverse(123) << std::endl; // Output: 321
    std::cout << solution.reverse(-123) << std::endl; // Output: -321
    std::cout << solution.reverse(120) << std::endl; // Output: 21
    std::cout << solution.reverse(0) << std::endl; // Output: 0
    std::cout << solution.reverse(1534236469) << std::endl; // Output: 0 (Overflow case)
    return 0;
}
