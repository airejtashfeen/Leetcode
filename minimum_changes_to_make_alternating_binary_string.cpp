#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int start_0 = 0, start_1 = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]-'0' == i%2) {
                start_1++;
            } else {
                start_0++;
            }
        }
        return min(start_0, start_1);
        }
};

int main() {
    Solution sol;
    string s = "1100"; // Example input
    int result = sol.minOperations(s);
    cout << "Minimum operations: " << result << endl;
    return 0;
}
