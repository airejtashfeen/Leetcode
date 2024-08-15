#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        vector<char> ans1;
        vector<char> ans2;

        for (const string& word : word1) {
            for (char ch : word) {
                ans1.push_back(ch);
            }
        }

        for (const string& word : word2) {
            for (char ch : word) {
                ans2.push_back(ch);
            }
        }

        return ans1 == ans2;
    }
};

int main() {
    // Create instances of vector<string> for testing
    vector<string> word1 = {"abc", "d", "efg"};
    vector<string> word2 = {"abcd", "efg"};
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Call the arrayStringsAreEqual method and store the result
    bool result = sol.arrayStringsAreEqual(word1, word2);
    
    // Print the result
    if (result) {
        cout << "The arrays of strings are equal." << endl;
    } else {
        cout << "The arrays of strings are not equal." << endl;
    }
    
    return 0;
}
