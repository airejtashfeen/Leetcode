#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        
        if (n == 1) {
            return true;
        }
        
        bool firstUpperCase = isupper(word[0]);
        bool allUpperCase = true, allLowerCase = true;
        
        for (int i = 1; i < n; ++i) {
            if (!isupper(word[i])) {
                allUpperCase = false;
            }
            if (!islower(word[i])) {
                allLowerCase = false;
            }
            
            if (!allUpperCase && !allLowerCase) {
                return false;
            }
        }
        
        if (firstUpperCase && allUpperCase) {
            return true;
        }
        if (!firstUpperCase && allLowerCase) {
            return true;
        }
        
        if (firstUpperCase && allLowerCase && islower(word[1])) {
            return true;
        }
        
        return false;
    }
};

int main() {
    Solution solution;

    string word1 = "USA";
    string word2 = "leetcode";
    string word3 = "Google";
    string word4 = "ggg";
    string word5 = "mL";
    
    cout << "Word \"" << word1 << "\" follows capitalization rules? " << boolalpha << solution.detectCapitalUse(word1) << endl;
    cout << "Word \"" << word2 << "\" follows capitalization rules? " << boolalpha << solution.detectCapitalUse(word2) << endl;
    cout << "Word \"" << word3 << "\" follows capitalization rules? " << boolalpha << solution.detectCapitalUse(word3) << endl;
    cout << "Word \"" << word4 << "\" follows capitalization rules? " << boolalpha << solution.detectCapitalUse(word4) << endl;
    cout << "Word \"" << word5 << "\" follows capitalization rules? " << boolalpha << solution.detectCapitalUse(word5) << endl;
    
    return 0;
}
