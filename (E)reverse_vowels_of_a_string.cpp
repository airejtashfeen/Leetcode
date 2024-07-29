#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }
            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }

            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s1 = "hello";
    cout << "Reversed vowels in \"" << s1 << "\": " << sol.reverseVowels(s1) << endl; // Output: "holle"

    string s2 = "leetcode";
    cout << "Reversed vowels in \"" << s2 << "\": " << sol.reverseVowels(s2) << endl; // Output: "leotcede"

    string s3 = "aA";
    cout << "Reversed vowels in \"" << s3 << "\": " << sol.reverseVowels(s3) << endl; // Output: "Aa"

    string s4 = "abc";
    cout << "Reversed vowels in \"" << s4 << "\": " << sol.reverseVowels(s4) << endl; // Output: "abc"

    return 0;
}
