#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n) {
        // Check vertical column
        for(int i = 0; i < row; i++) {
            if(board[i][col] == 'Q') {
                return false;
            }
        }

        // Check upper-left diagonal
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }   

        // Check upper-right diagonal
        for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
           if(board[i][j] == 'Q') {
                return false;
            }
        }           

        return true;
    }

    void solveNQueensUtil(int row, vector<string>& board, vector<vector<string>>& result, int n) {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q'; 
                solveNQueensUtil(row + 1, board, result, n); 
                board[row][col] = '.'; 
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.')); 
        solveNQueensUtil(0, board, result, n);
        return result;
    }
};

int main() {
    Solution sol;
    int n = 8; // Change this value to test different sizes of the board

    vector<vector<string>> solutions = sol.solveNQueens(n);

    cout << "Solutions for " << n << "-Queens Problem:" << endl;
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
