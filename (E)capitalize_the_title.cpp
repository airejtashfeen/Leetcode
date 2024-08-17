#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        string ans;
        int n = title.size();
        for (int i = 0; i < n; ++i) {
            string word;
            while (i < n && title[i] != ' ') {
                word += tolower(title[i]);
                ++i;
            }
            if (word.size() > 2) {
                word[0] = toupper(word[0]);
            }
            if (!ans.empty()) {
                ans += " ";
            }
            ans += word;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string title;

    cout << "Enter a title: ";
    getline(cin, title);

    string capitalizedTitle = solution.capitalizeTitle(title);
    cout << "Capitalized title: " << capitalizedTitle << endl;

    return 0;
}