#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";

        unordered_set<char> set1(s1.begin(), s1.end());
        unordered_set<char> set2(s2.begin(), s2.end());
        unordered_set<char> set3(s3.begin(), s3.end());

        for (const string& word : words) {
            bool canBeTyped = true;
            unordered_set<char> currentSet;
            
            if (set1.find(tolower(word[0])) != set1.end()) {
                currentSet = set1;
            } else if (set2.find(tolower(word[0])) != set2.end()) {
                currentSet = set2;
            } else if (set3.find(tolower(word[0])) != set3.end()) {
                currentSet = set3;
            } else {
                canBeTyped = false;
            }
            
            if (canBeTyped) {
                for (char c : word) {
                    if (currentSet.find(tolower(c)) == currentSet.end()) {
                        canBeTyped = false;
                        break;
                    }
                }
            }
            
            if (canBeTyped) {
                ans.push_back(word);
            }
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> result = sol.findWords(words);

    cout << "Words that can be typed using letters from one row:" << endl;
    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
