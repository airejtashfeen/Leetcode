#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);

            else if (st.empty()){
                return false;
            }
          else{
            char c= st.top();
            st.pop();

        if(s[i]!=')' && c=='(' ||
          s[i]!='}' && c=='{' ||
          s[i]!=']' && c=='['
          ){
            return false;
          }
        }
            }
            return st.empty();
            }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter the string (brackets only): ";
    cin >> s;
    bool isValid = sol.isValid(s);
    cout << boolalpha << isValid << endl;
}
