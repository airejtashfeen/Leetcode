#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> hashMap;

        for (char ch : s) {
            ++hashMap[ch];
        }
        int number = hashMap[s[0]];

        for (auto& pair : hashMap) {
            if (pair.second != number) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s = "abacbc";
    bool result = solution.areOccurrencesEqual(s);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
