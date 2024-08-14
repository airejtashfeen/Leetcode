#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int sum = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i + j == m - 1) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<vector<int>> mat1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Diagonal Sum for mat1: " << sol.diagonalSum(mat1) << endl; // Output should be 25

    // Example 2
    vector<vector<int>> mat2 = {
        {1, 0},
        {0, 1}
    };
    cout << "Diagonal Sum for mat2: " << sol.diagonalSum(mat2) << endl; // Output should be 2

    return 0;
}
