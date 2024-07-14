#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

class Solution {
public:
   string reverseWords(string s) {
        string ans;
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                continue;
            }

            int j = i;
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            // Add a space before each word, except for the first word
            if (!ans.empty()) {
                ans.push_back(' ');
            }

            ans.append(s.substr(i + 1, j - i));
        }

        return ans;
    }
};

int main() {
    Solution solution;
    std::cout << "\"" << solution.reverseWords("the sky is blue") << "\"" << std::endl; // Output: "blue is sky the"
    std::cout << "\"" << solution.reverseWords("  hello world  ") << "\"" << std::endl; // Output: "world hello"
    std::cout << "\"" << solution.reverseWords("a good   example") << "\"" << std::endl; // Output: "example good a"
    std::cout << "\"" << solution.reverseWords("  Bob    Loves  Alice   ") << "\"" << std::endl; // Output: "Alice Loves Bob"
    std::cout << "\"" << solution.reverseWords("Alice does not even like bob") << "\"" << std::endl; // Output: "bob like even not does Alice"
    return 0;
}
