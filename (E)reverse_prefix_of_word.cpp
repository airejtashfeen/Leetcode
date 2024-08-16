#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index;
        string ans = "", rev; 
        for(int i = 0; i < word.size(); i++) {
            if(word[i] == ch) {
                index = i;
                rev = word.substr(0, i + 1);
                break;
            }
        }
        reverse(rev.begin(), rev.end());
        ans.append(rev);
        for(int i = index + 1; i < word.size(); i++) {
            ans.push_back(word[i]);
        }
        if(ans.size() > 1) return ans;
        return word;
    }
};

int main() {
    Solution solution;
    string word = "abcdefd";
    char ch = 'd';
    cout << solution.reversePrefix(word, ch) << endl;
    return 0;
}
