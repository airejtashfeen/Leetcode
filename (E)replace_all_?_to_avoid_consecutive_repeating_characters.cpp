#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string modifyString(string s) {
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '?') {

                for (char ch = 'a'; ch <= 'c'; ++ch) {

                    if ((i > 0 && s[i - 1] == ch) || (i < s.size() - 1 && s[i + 1] == ch)) {
                        continue;
                    }

                    s[i] = ch;
                    break;
                }
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    // Example usage
    string s1 = "a?b?c";
    cout << "Modified String: " << sol.modifyString(s1) << endl; // Example output: "acbcb"

    string s2 = "?a?b?";
    cout << "Modified String: " << sol.modifyString(s2) << endl; // Example output: "cabcb"

    return 0;
}
