#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == letter) {
                count++;
            }
        }
        
        int percentage = (count * 100) / n;
        return percentage;
    }
};

int main() {
    string s = "foobar";
    char letter = 'o';

    Solution solution;
    int percentage = solution.percentageLetter(s, letter);

    cout << "Percentage of 'o' in \"foobar\": " << percentage << "%" << endl;

    return 0;
}