#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;

        int n= haystack.length();
        int m= needle.length();

        for(int i=0; i< n; i++){
            if(haystack.substr(i, m)==needle) return i;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    string haystack = "sadbutsad";
    string needle = "sad";
    
    int result = solution.strStr(haystack, needle);
    cout << "The index of the first occurrence of \"" << needle << "\" in \"" << haystack << "\" is: " << result << endl;
    
    return 0;
}