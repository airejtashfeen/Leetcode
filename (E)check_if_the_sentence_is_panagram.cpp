#include <iostream>
#include <unordered_set>
#include <string>

using namespace std; 

class Solution {
public:
    bool checkIfPangram(std::string sentence) {

       unordered_set<char> alphabetSet{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        
        for (char ch : sentence) {
            alphabetSet.erase(ch);
        }

        return alphabetSet.empty();
    }
};

int main() {
    Solution sol;
    std::string sentence = "the quick brown fox jumps over the lazy dog";
    
    bool result = sol.checkIfPangram(sentence);
    
    std::cout << "Is the sentence a pangram? " << (result ? "Yes" : "No") << std::endl;
    
    return 0;
}
