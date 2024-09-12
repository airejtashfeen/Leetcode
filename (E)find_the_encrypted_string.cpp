#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        string ans;

        for (int i = 0; i < n; i++) {
            ans += s[(i + k) % n];
        }

        return ans;
    }
};

int main() {
    Solution solution;
    string s = "abcdef";
    int k = 2;
    
    string encrypted = solution.getEncryptedString(s, k);
    cout << "Encrypted String: " << encrypted << endl;

    return 0;
}
