#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowCount(m, 0), colCount(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int specialCount = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1) {
                    specialCount++;
                }
            }
        }

        return specialCount;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<vector<int>> mat = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int result = sol.numSpecial(mat);

    cout << "Number of special positions: " << result << endl;

    return 0;
}