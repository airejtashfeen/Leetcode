#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        for (char c : t) {
            if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
                return false; 
            } else {
                charCount[c]--;
            }
        }

        for (auto& pair : charCount) {
            if (pair.second != 0) {
                return false; 
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";

    if (sol.isAnagram(s, t)) {
        cout << "\"" << s << "\" and \"" << t << "\" are anagrams." << endl;
    } else {
        cout << "\"" << s << "\" and \"" << t << "\" are not anagrams." << endl;
    }

    return 0;
}
