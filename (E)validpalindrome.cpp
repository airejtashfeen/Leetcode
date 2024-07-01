#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string answer;

        for(char c: s){
            if(isalnum(c)){
                answer.push_back(tolower(c));
            }
        }

        if(answer.empty() || answer.length() == 1) {
            return true;
        }

        int left = 0;
        int right = answer.length() - 1;

        while(left < right) {
            if(answer[left] != answer[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution solution;

    cout << solution.isPalindrome("A man, a plan, a canal: Panama") << endl;  
    cout << solution.isPalindrome("race a car") << endl;  
    cout << solution.isPalindrome("0P") << endl;  

    return 0;
}
