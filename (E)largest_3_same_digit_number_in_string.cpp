#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string maxAns = "";

        for (int i = 0; i < num.size() - 2; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string current = num.substr(i, 3);
                if (current > maxAns) {
                    maxAns = current;
                }
            }
        }

        return maxAns;
    }
};

int main() {
    string num = "44494744"; // Example input
    Solution solution;
    string largest = solution.largestGoodInteger(num);
    cout << "Largest good integer: " << largest << endl; // Output
    return 0;
}