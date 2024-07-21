#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
   void generateCombination(int open, int close, int n, vector<string>& result, string current) {
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
           generateCombination(open + 1, close, n, result, current + '(');
        }

        if (close < open) {
            generateCombination(open, close + 1, n, result, current + ')');
        }
   }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateCombination(0, 0, n, result, "");
        return result;
    }
};

int main() {
    Solution solution;
    int n = 3;  // You can change this value to test different cases
    vector<string> result = solution.generateParenthesis(n);

    cout << "Possible combinations for n = " << n << ":" << endl;
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
