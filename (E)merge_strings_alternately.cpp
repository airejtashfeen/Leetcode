#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int maxLength= max(word1.length(), word2.length());

        for(int i=0; i<maxLength; ++i){
            if(i<word1.length()){
                ans+= word1[i];  
            }
            
            if(i<word2.length()){
                ans+= word2[i];  
            }           
        }
        return ans;
    }
}; 

int main() {
    Solution sol;
    
    // Test case 1
    string word1 = "abc";
    string word2 = "pqr";
    cout << "Merged string: " << sol.mergeAlternately(word1, word2) << endl;
    // Expected output: "apbqcr"

    // Test case 2
    word1 = "abcd";
    word2 = "pq";
    cout << "Merged string: " << sol.mergeAlternately(word1, word2) << endl;
    // Expected output: "apbqcd"

    return 0;
}
