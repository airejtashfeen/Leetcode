#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    bool isSubsequence(const string& str, const string& sub) {
        int n = str.size(), m = sub.size();
        int j = 0;
        
        for (int i = 0; i < n && j < m; ++i) {
            if (str[i] == sub[j]) {
                ++j;
            }
        }
        
        return j == m;
    }
    
    int findLUSlength(vector<string>& strs) {
        int n = strs.size();
        int maxLen = -1;
        
        for (int i = 0; i < n; ++i) {
            bool isUncommon = true;
            for (int j = 0; j < n; ++j) {
                if (i != j && isSubsequence(strs[j], strs[i])) {
                    isUncommon = false;
                    break;
                }
            }
            
            if (isUncommon) {
                maxLen = max(maxLen, static_cast<int>(strs[i].size()));
            }
        }
        
        return maxLen;
    }
};

int main() {
    Solution sol;

    // Test cases
    vector<string> strs1 = {"aba", "cdc", "eae"};
    vector<string> strs2 = {"aaa", "aaa", "aa"};
    vector<string> strs3 = {"aabbcc", "aabbcc", "c", "e", "aabbcd"};

    // Run test cases
    cout << "Test case 1: " << sol.findLUSlength(strs1) << endl;  // Expected: 3 (e.g., "eae")
    cout << "Test case 2: " << sol.findLUSlength(strs2) << endl;  // Expected: -1 (all strings are subsequences of each other)
    cout << "Test case 3: " << sol.findLUSlength(strs3) << endl;  // Expected: 1 (e.g., "c" or "e")

    return 0;
}
