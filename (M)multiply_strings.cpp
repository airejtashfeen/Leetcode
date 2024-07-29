#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.length();
        int n = num2.length();
        
        if (num1 == "0" || num2 == "0") return "0";

        vector<int> result(m + n, 0);

        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string resultStr = "";
        for (int num : result) {
            if (!(resultStr.empty() && num == 0)) { 
                resultStr += to_string(num);
            }
        }

        return resultStr.empty() ? "0" : resultStr;
    }
};



// Main function to test the multiply function
int main() {
    Solution sol;
    string num1 = "123";
    string num2 = "45";
    
    string result = sol.multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is " << result << endl;
    
    return 0;
}
