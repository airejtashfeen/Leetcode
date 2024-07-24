#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        std::unordered_set<int> zeroRows;
        std::unordered_set<int> zeroCols;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeroRows.insert(i);
                    zeroCols.insert(j);
                }
            }
        }

        for (int row : zeroRows) {
            for (int j = 0; j < cols; j++) {
                matrix[row][j] = 0;
            }
        }

        for (int col : zeroCols) {
            for (int i = 0; i < rows; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Solution solution;

    // Test case 1
    std::vector<std::vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    std::cout << "Original matrix:" << std::endl;
    printMatrix(matrix1);

    solution.setZeroes(matrix1);

    std::cout << "Matrix after setting zeroes:" << std::endl;
    printMatrix(matrix1);

    // Test case 2
    std::vector<std::vector<int>> matrix2 = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };

    std::cout << "Original matrix:" << std::endl;
    printMatrix(matrix2);

    solution.setZeroes(matrix2);

    std::cout << "Matrix after setting zeroes:" << std::endl;
    printMatrix(matrix2);

    return 0;
}
