#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        vector<int> result(n + 1, 0);
        result[0] = 1; 
        return result;
    }
};

int main() {
    Solution sol;

    // Test case 1: Regular case
    vector<int> digits1 = {1, 2, 3}; // Represents the number 123
    vector<int> result1 = sol.plusOne(digits1);
    cout << "Result for [1, 2, 3]: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    // Test case 2: Edge case with all digits being 9
    vector<int> digits2 = {9, 9, 9}; // Represents the number 999
    vector<int> result2 = sol.plusOne(digits2);
    cout << "Result for [9, 9, 9]: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    // Test case 3: Case with a single digit
    vector<int> digits3 = {5}; // Represents the number 5
    vector<int> result3 = sol.plusOne(digits3);
    cout << "Result for [5]: ";
    for (int num : result3) cout << num << " ";
    cout << endl;

    // Test case 4: Case with zero
    vector<int> digits4 = {0}; // Represents the number 0
    vector<int> result4 = sol.plusOne(digits4);
    cout << "Result for [0]: ";
    for (int num : result4) cout << num << " ";
    cout << endl;

    // Test case 5: Another case with trailing nines
    vector<int> digits5 = {1, 9, 9}; // Represents the number 199
    vector<int> result5 = sol.plusOne(digits5);
    cout << "Result for [1, 9, 9]: ";
    for (int num : result5) cout << num << " ";
    cout << endl;

    return 0;
}
