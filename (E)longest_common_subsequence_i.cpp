#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        
        return a.length()>b.length()? a.length() : b.length();
    }
};

int main() {
    Solution sol;

    // Test cases
    string a1 = "abc";
    string b1 = "def";
    string a2 = "abc";
    string b2 = "abc";
    string a3 = "abcd";
    string b3 = "abc";

    // Run test cases
    cout << "Test case 1: " << sol.findLUSlength(a1, b1) << endl;  // Expected: 3 (length of "abc" or "def")
    cout << "Test case 2: " << sol.findLUSlength(a2, b2) << endl;  // Expected: -1 (same strings)
    cout << "Test case 3: " << sol.findLUSlength(a3, b3) << endl;  // Expected: 4 (length of "abcd")

    return 0;
}
