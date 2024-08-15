#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0;
        string temp = word;

        while (sequence.find(temp) != string::npos) {
            count++;
            temp += word;
        }
        return count;
    }
};

int main() {
    Solution sol;
    
    // Example 1
    string sequence1 = "abababab";
    string word1 = "ab";
    cout << "Max repeating for 'sequence1' and 'word1': " << sol.maxRepeating(sequence1, word1) << endl;

    // Example 2
    string sequence2 = "aaabbbaaa";
    string word2 = "aa";
    cout << "Max repeating for 'sequence2' and 'word2': " << sol.maxRepeating(sequence2, word2) << endl;

    // Example 3
    string sequence3 = "abc";
    string word3 = "xyz";
    cout << "Max repeating for 'sequence3' and 'word3': " << sol.maxRepeating(sequence3, word3) << endl;

    return 0;
}
