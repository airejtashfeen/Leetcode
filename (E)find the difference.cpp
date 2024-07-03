
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char res;
        if (s.empty()) {
            return t[0];
        }
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < t.size(); j++) {
                if (s[i] == t[j]) {
                    t[j] = ' ';
                    break;
                }
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != ' ') {
                res = t[i];
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    string s1 = "abcd";
    string t1 = "abcde";
    cout << "The added character is: " << sol.findTheDifference(s1, t1) << endl;  // Output: e

    // Test case 2
    string s2 = "";
    string t2 = "y";
    cout << "The added character is: " << sol.findTheDifference(s2, t2) << endl;  // Output: y

    // Test case 3
    string s3 = "a";
    string t3 = "aa";
    cout << "The added character is: " << sol.findTheDifference(s3, t3) << endl;  // Output: a

    // Test case 4
    string s4 = "ae";
    string t4 = "aea";
    cout << "The added character is: " << sol.findTheDifference(s4, t4) << endl;  // Output: a

    return 0;
}
