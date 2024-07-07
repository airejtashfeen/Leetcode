#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        
        int s_index = 0;
        for (int t_index = 0; t_index < t_len; t_index++) {
            if (s_index < s_len && s[s_index] == t[t_index]) {
                s_index++;
            }
        }
        
        return s_index == s_len;
    }
};

int main() {
    Solution solution;
    string s, t;

    // Test Case 1
    s = "abc";
    t = "ahbgdc";
    cout << "Test Case 1: " << (solution.isSubsequence(s, t) ? "True" : "False") << endl; // Expected output: True

    // Test Case 2
    s = "axc";
    t = "ahbgdc";
    cout << "Test Case 2: " << (solution.isSubsequence(s, t) ? "True" : "False") << endl; // Expected output: False

    // Test Case 3
    s = "";
    t = "ahbgdc";
    cout << "Test Case 3: " << (solution.isSubsequence(s, t) ? "True" : "False") << endl; // Expected output: True

    // Test Case 4
    s = "abc";
    t = "";
    cout << "Test Case 4: " << (solution.isSubsequence(s, t) ? "True" : "False") << endl; // Expected output: False

    // Additional Test Case
    s = "ace";
    t = "abcde";
    cout << "Additional Test Case: " << (solution.isSubsequence(s, t) ? "True" : "False") << endl; // Expected output: True

    return 0;
}
