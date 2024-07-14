#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count_max = -1;
        int index = -1;

        for (int i = 0; i < n; i++) {
            int count_ones = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    count_ones++;
                }
            }
            if (count_ones > count_max) {
                count_max = count_ones;
                index = i;
            }
        }
        return {index, count_max};
    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {0, 1},
        {1, 0}
    };

    vector<int> result = sol.rowAndMaximumOnes(mat);
    cout << "Row with maximum ones is: " << result[0] << " with " << result[1] << " ones." << endl;

    return 0;
}
