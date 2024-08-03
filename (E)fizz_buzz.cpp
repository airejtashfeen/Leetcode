#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
                continue;
            }
            if (i % 3 == 0) {
                ans.push_back("Fizz");
                continue;
            }
            if (i % 5 == 0) {
                ans.push_back("Buzz");
                continue;
            }
            ans.push_back(to_string(i));
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n = 15; // You can change this value to test different cases
    vector<string> result = sol.fizzBuzz(n);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
