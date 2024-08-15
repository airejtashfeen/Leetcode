#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        for(int i=num.size()-1; i>=0; i--){
            if(num[i]%2!=0){
              ans= num.substr(0, i+1);
              break;
            }
        }
        return ans;
    }
};

// Main function to test the code
int main() {
    Solution sol;
    std::string num = "52";
    
    std::string result = sol.largestOddNumber(num);
    
    std::cout << "The largest odd number is: " << result << std::endl;
    
    return 0;
}
