#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;
        int lateCount = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                absentCount++;
            }
            if (s[i] == 'L') {
                lateCount++;
            }
            if (absentCount >= 2) {
                return false;
            }
            if (lateCount >= 3) {
                return false;
            }
            if (s[i] != 'L') {
                lateCount = 0;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string test1 = "PPALLP";  // Expected: true
    string test2 = "PPALLL";  // Expected: false (more than 2 continuous 'L')
    string test3 = "PPAALLP"; // Expected: false (more than 1 'A')
    string test4 = "PPAPLP";  // Expected: true

    // Run test cases
    cout << "Test case 1: " << (sol.checkRecord(test1) ? "Pass" : "Fail") << endl;
    cout << "Test case 2: " << (sol.checkRecord(test2) ? "Pass" : "Fail") << endl;
    cout << "Test case 3: " << (sol.checkRecord(test3) ? "Pass" : "Fail") << endl;
    cout << "Test case 4: " << (sol.checkRecord(test4) ? "Pass" : "Fail") << endl;

    return 0;
}
