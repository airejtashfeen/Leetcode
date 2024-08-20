#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count = 0;
        string numStr = to_string(num);

        for (int i = 0; i < numStr.size() - k + 1; ++i) {
            int divisor = stoi(numStr.substr(i, k));
            if (divisor != 0 && num % divisor == 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    int num = 241;
    int k = 2;

    Solution solution;
    int result = solution.divisorSubstrings(num, k);

    cout << "Number of divisor substrings: " << result << endl;

    return 0;
}