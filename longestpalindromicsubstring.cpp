#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) {
            return s;
        }
        int maxLen = 1;
        int start = 0, end = 0;

        // For odd length palindromes
        for (int i = 0; i < n; i++) {
            int left = i;
            int right = i;
            while (left >= 0 && right < n) {
                if (s[left] == s[right]) {
                    left--;
                    right++;
                } else {
                    break;
                }
                int len = right - left - 1;
                if (len > maxLen) {
                    maxLen = len;
                    start = left + 1;
                    end = right - 1;
                }
            }
        }

        // For even length palindromes
        for (int i = 0; i < n; i++) {
            int left = i;
            int right = i + 1;
            while (left >= 0 && right < n) {
                if (s[left] == s[right]) {
                    left--;
                    right++;
                } else {
                    break;
                }
                int len = right - left - 1;
                if (len > maxLen) {
                    maxLen = len;
                    start = left + 1;
                    end = right - 1;
                }
            }
        }

        return s.substr(start, maxLen);
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "babad";
    string test2 = "cbbd";
    string test3 = "a";
    string test4 = "ac";

    cout << "Test case 1: " << test1 << " -> " << solution.longestPalindrome(test1) << endl;
    cout << "Test case 2: " << test2 << " -> " << solution.longestPalindrome(test2) << endl;
    cout << "Test case 3: " << test3 << " -> " << solution.longestPalindrome(test3) << endl;
    cout << "Test case 4: " << test4 << " -> " << solution.longestPalindrome(test4) << endl;

    return 0;
}
