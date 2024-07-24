#include <iostream>
#include <string>
#include <algorithm>

using namespace std;  // Use the std namespace

class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        int m = a.length() - 1;
        int n = b.length() - 1;

        while (m >= 0 || n >= 0 || carry) {
            int sum = carry;

            if (m >= 0) {
                sum += a[m] - '0';
                m--;
            }

            if (n >= 0) {
                sum += b[n] - '0';
                n--;
            }

            carry = sum / 2;
            ans.push_back(sum % 2 + '0');
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution solution;

    string a = "1110";
    string b = "1011";

    string result = solution.addBinary(a, b);

    cout << "Sum of binary numbers " << a << " and " << b << " is: " << result << endl;

    return 0;
}
