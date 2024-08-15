#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans;
        int i = 0;
        
        while (i < command.size()) {
            if (command[i] == '(') {
                if (i + 1 < command.size() && command[i + 1] == ')') {
                    ans.push_back('o'); 
                    i += 2; 
                } else if (i + 3 < command.size() && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
                    ans.append("al");
                    i += 4; 
                }
            } else {
                ans.push_back(command[i]); 
                i++;
            }
        }
        
        return ans;
    }
};


int main() {
    Solution sol;
    
    string command1 = "G()(al)";
    string command2 = "G()()()()(al)";
    string command3 = "(al)G(al)()()G";
    
    cout << "Interpreted command 1: " << sol.interpret(command1) << endl;
    cout << "Interpreted command 2: " << sol.interpret(command2) << endl;
    cout << "Interpreted command 3: " << sol.interpret(command3) << endl;
    
    return 0;
}
