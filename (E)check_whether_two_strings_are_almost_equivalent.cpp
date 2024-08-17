#include <iostream>
#include <unordered_map>
#include <cmath> 

using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> frequencyMap;

        for (char ch : word1) {
            ++frequencyMap[ch];
        }

        for (char ch : word2) {
            --frequencyMap[ch];
        }

        for (const auto& pair : frequencyMap) {
            if (abs(pair.second) > 3) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string word1 = "abcde";
    string word2 = "abccd";
    bool result = sol.checkAlmostEquivalent(word1, word2);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
