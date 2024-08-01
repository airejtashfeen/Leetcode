#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashMap;
        
        for (char c : magazine) {
            hashMap[c]++;
        }

        for (char c : ransomNote) {
            if (hashMap[c] > 0) {
                hashMap[c]--;
            } else {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string ransomNote = "a";
    string magazine = "b";
    cout << (sol.canConstruct(ransomNote, magazine) ? "True" : "False") << endl;

    ransomNote = "aa";
    magazine = "ab";
    cout << (sol.canConstruct(ransomNote, magazine) ? "True" : "False") << endl;

    return 0;
}
