#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    void backtrack(int start, vector<vector<string>>&result, vector<string>&current, string& s){
        if (start>=s.length()){
            result.push_back(current);
            return;
        }

        for(int end=start; end<s.length(); end++){
            if(isPalindrome(s,start, end)){
                current.push_back(s.substr(start, end-start+1));
                backtrack(end+1,result,current, s);
                current.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
       vector<vector<string>>result;
       vector<string>current;

       backtrack(0, result,current, s);
       return result;
    }
};

// Main function to test the solution
int main() {
    Solution sol;
    string s1 = "aab";
    string s2 = "a";

    vector<vector<string>> result1 = sol.partition(s1);
    vector<vector<string>> result2 = sol.partition(s2);

    cout << "Partitioning for 'aab':" << endl;
    for (const auto& partition : result1) {
        for (const auto& str : partition) {
            cout << str << " ";
        }
        cout << endl;
    }

    cout << "Partitioning for 'a':" << endl;
    for (const auto& partition : result2) {
        for (const auto& str : partition) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
