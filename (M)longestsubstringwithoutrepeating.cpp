#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

//Only solution class written by myself, main etc taken from GPT as unnecessary to spend time
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        if (s == " ") return 1;
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            unordered_set<char> hashset;
            int difference = 0;

            for (int j = i; j < s.length(); j++) {
                if (hashset.find(s[j]) != hashset.end()) {
                    maxLength = max(maxLength, difference);
                    break;
                }
                hashset.insert(s[j]);
                difference = j - i + 1; 
            }

            maxLength = max(maxLength, difference); 
        }

        return maxLength;
    }
};

int main() {
    Solution solution;
    string s = "c";
    cout << "The length of the longest substring without repeating characters is: " << solution.lengthOfLongestSubstring(s) << endl;
    return 0;
}
