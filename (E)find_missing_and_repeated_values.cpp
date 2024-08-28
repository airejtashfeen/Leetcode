#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> hashSet;
        int n = grid.size();
        int repeated = -1, missing = -1;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                int num = grid[i][j];
                if (hashSet.find(num) != hashSet.end()) {
                    repeated = num;
                }
                hashSet.insert(num);
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (hashSet.find(i) == hashSet.end()) {
                missing = i;
                break;
            }
        }

        return {repeated, missing};
    }
};

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Solution solution;
    vector<int> result = solution.findMissingAndRepeatedValues(grid);

    cout << "Repeated number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}