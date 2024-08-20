#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char, int> hashMap;

        for (char ch : num) {
            ++hashMap[ch];
        }

        for (int i = 0; i < num.size(); ++i) {
            char digit = '0' + i;
            int expectedCount = num[i] - '0';
            if (hashMap[digit] != expectedCount) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string num = "1210"; // Replace with your desired input
    Solution solution;
    bool result = solution.digitCount(num);
    cout << "Digit count condition: " << (result ? "true" : "false") << endl;
    return 0;
}