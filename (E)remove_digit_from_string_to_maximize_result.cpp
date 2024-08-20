#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";
        for (int i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string temp = number.substr(0, i) + number.substr(i + 1);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

int main() {
    string number = "123";
    char digit = '3';

    Solution solution;
    string result = solution.removeDigit(number, digit);

    cout << "Result: " << result << endl;

    return 0;
}#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";
        for (int i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string temp = number.substr(0, i) + number.substr(i + 1);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

int main() {
    string number = "123";
    char digit = '3';

    Solution solution;
    string result = solution.removeDigit(number, digit);

    cout << "Result: " << result << endl;

    return 0;
}