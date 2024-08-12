#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> current(i + 1, 1);
            for (int j = 1; j < i; j++) {
                current[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(current);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Specify the number of rows for Pascal's Triangle
    int numRows = 5;

    // Generate Pascal's Triangle
    vector<vector<int>> result = sol.generate(numRows);

    // Print Pascal's Triangle
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
