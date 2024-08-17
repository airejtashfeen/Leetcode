#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); ++i) {
            string s = words[i];
            string a = s;
            reverse(a.begin(), a.end());
            if(a == s) {
                return s;
            }
        }
        return ""; 
    }
};

int main() {
    Solution solution;
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    
    string result = solution.firstPalindrome(words);
    if (result != "") {
        cout << "First palindrome in the list: " << result << endl;
    } else {
        cout << "No palindrome found in the list." << endl;
    }

    return 0;
}
