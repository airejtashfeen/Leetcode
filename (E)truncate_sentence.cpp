#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;    
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (count == k) {
                ans = s.substr(0, i-1);
                break;
            }
            if (s[i] == ' ') {
                count++;
            }
        }

        if (count < k) {
            return s;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s = "Hello how are you doing today";
    int k = 4;
    string result = sol.truncateSentence(s, k);
    cout << result << endl; // Output should be "Hello how are you"
    return 0;
}

        if(count<k){
            return s;
        }
        return ans;
    }
};