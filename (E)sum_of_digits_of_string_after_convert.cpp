#include <iostream>
#include <map>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        
        map<char, string> hashMap = {
            {'a', "1"}, {'b', "2"}, {'c', "3"}, {'d', "4"}, {'e', "5"},
            {'f', "6"}, {'g', "7"}, {'h', "8"}, {'i', "9"}, {'j', "10"},
            {'k', "11"}, {'l', "12"}, {'m', "13"}, {'n', "14"}, {'o', "15"},
            {'p', "16"}, {'q', "17"}, {'r', "18"}, {'s', "19"}, {'t', "20"},
            {'u', "21"}, {'v', "22"}, {'w', "23"}, {'x', "24"}, {'y', "25"},
            {'z', "26"}
        };

        string numStr;
        for (char ch : s) {
            numStr += hashMap[ch];
        }

        for (int i = 0; i < k; ++i) {
            int sum = 0;
            for (char digit : numStr) {
                sum += digit - '0';
            }
            numStr = to_string(sum);
        }

        return stoi(numStr);
    }
};

int main() {
    Solution solution;
    string s = "leetcode";
    int k = 2;
    int result = solution.getLucky(s, k);
    cout << result << endl;  // Output will depend on input string and k
    return 0;
}
