#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (const string& operation : operations) {
            if (operation == "--X" || operation == "X--") {
                ans -= 1;
            } else {
                ans += 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> operations = {"--X", "X++", "++X", "X--"}; // Example input
    int result = solution.finalValueAfterOperations(operations);
    cout << "Final Value: " << result << endl;
    return 0;
}
