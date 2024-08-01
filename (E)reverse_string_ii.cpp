#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();

        for (int i = 0; i < n; i += 2 * k) {
            if (i + k <= n) {
                reverse(s.begin() + i, s.begin() + i + k);
            } else {
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    // Test case 1
    string s1 = "abcdefg";
    int k1 = 2;
    cout << "Input: " << s1 << ", k = " << k1 << endl;
    cout << "Output: " << sol.reverseStr(s1, k1) << endl;

    // Test case 2
    string s2 = "abcd";
    int k2 = 3;
    cout << "Input: " << s2 << ", k = " << k2 << endl;
    cout << "Output: " << sol.reverseStr(s2, k2) << endl;

    return 0;
}
