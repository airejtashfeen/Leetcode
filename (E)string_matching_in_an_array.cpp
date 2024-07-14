#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;

        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words.size(); ++j) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break; 
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"leetcode", "coding", "cat", "sand", "dog"};

    vector<string> result = sol.stringMatching(words);

    cout << "Words that are substrings of other words:" << endl;
    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
