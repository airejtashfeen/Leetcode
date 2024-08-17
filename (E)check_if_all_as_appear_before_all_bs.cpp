#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
       for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'b' && s[i+1] == 'a' && i + 1 < s.size()) {
                return false;
            }  
       }
       return true;
    }
};

int main() {
    Solution sol;
    string s = "aaabbb";
    bool result = sol.checkString(s);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
