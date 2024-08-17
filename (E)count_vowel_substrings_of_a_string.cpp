#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int countVowelSubstrings(string word) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        
        for (int i = 0; i < word.size(); i++) {
            unordered_set<char> currentVowels;
            for (int j = i; j < word.size(); j++) {
                if (vowels.find(word[j]) != vowels.end()) {
                    currentVowels.insert(word[j]);
                    if (currentVowels.size() == 5) {
                        count++;
                    }
                } else {
                    break; 
                }
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    string word = "aeiouu";
    int result = sol.countVowelSubstrings(word);
    cout << "Number of vowel substrings: " << result << endl;
    return 0;
}
