#include <iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(char &c:s){
            c= tolower(c);
        }
        return s;
    }
};

int main() {
    Solution solution;
    string input = "Hello World!";
    string output = solution.toLowerCase(input);
    
    cout << "Original string: " << input << endl;
    cout << "Lowercase string: " << output << endl;
    
    return 0;
}