#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
    void calculateChars(int index, const unordered_map<char, string> &keyboard, vector<string> &result, string digits, string current) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        char digit = digits[index];
        if (keyboard.find(digit) != keyboard.end()) {
            string letters = keyboard.at(digit);
            for (char letter : letters) {
                calculateChars(index + 1, keyboard, result, digits, current + letter);
            }
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> keyboard = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> result;
        if (digits.empty()) return result;

        calculateChars(0, keyboard, result, digits, "");
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    string digits = "23";
    
    vector<string> combinations = solution.letterCombinations(digits);
    
    // Print the results
    cout << "Combinations for digits \"" << digits << "\":" << endl;
    for (const string &combination : combinations) {
        cout << combination << endl;
    }
    
    return 0;
}
