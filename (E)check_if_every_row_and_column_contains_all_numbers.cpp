#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; ++i) {
            unordered_set<int> rowSet;
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] < 1 || matrix[i][j] > n || rowSet.find(matrix[i][j]) != rowSet.end()) {
                    return false;
                }
                rowSet.insert(matrix[i][j]);
            }
        }

        for (int j = 0; j < n; ++j) {
            unordered_set<int> colSet;
            for (int i = 0; i < n; ++i) {
                if (matrix[i][j] < 1 || matrix[i][j] > n || colSet.find(matrix[i][j]) != colSet.end()) {
                    return false;
                }
                colSet.insert(matrix[i][j]);
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1, 2, 3}, {3, 1, 2}, {2, 3, 1}};
    bool result = sol.checkValid(matrix);
    cout << (result ? "Valid" : "Invalid") << endl;
    return 0;
}
