#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> hashSet(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        bool canType = true;

        for (int i = 0; i <= text.size(); i++) {
            if (i == text.size() || text[i] == ' ') {
                if (canType) {
                    count++;
                }
                canType = true;  
            } else if (hashSet.find(text[i]) != hashSet.end()) {
                canType = false;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    string text = "hello world";
    string brokenLetters = "ad";
    cout << sol.canBeTypedWords(text, brokenLetters) << endl; 
    return 0;
}
