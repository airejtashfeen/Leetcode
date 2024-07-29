#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hashMap;

        for (char a : s) {
            hashMap[a]++;
        }

        int length = 0;
        bool flag = false;

        for (auto& it : hashMap) {
            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                flag = true;
                length += it.second - 1;
            }
        }

        if (flag) {
            length += 1;
        }

        return length;
    }
};

int main() {
    Solution solution;
    string s = "hucivich";
    cout << "Longest Palindrome Length: " << solution.longestPalindrome(s) << endl; // Output: 5
    return 0;
}
