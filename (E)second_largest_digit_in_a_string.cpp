#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        unordered_set<int> hashSet;

        for(int i = 0; i < s.size(); ++i) {
            if(isdigit(s[i])) {
                hashSet.insert(s[i] - '0');
            }
        }

        if(hashSet.size() < 2) {
            return -1;
        }

        vector<int> digits(hashSet.begin(), hashSet.end());
        sort(digits.begin(), digits.end(), greater<int>());

        return digits[1];
    }
};

int main() {
    Solution solution;
    string s = "abc123";
    int result = solution.secondHighest(s);
    printf("Second highest digit: %d\n", result);
    return 0;
}
