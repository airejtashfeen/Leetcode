#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;  
        
        if (rowIndex == 0) {
            return {1};
        }
        if (rowIndex == 1) {
            return {1, 1};
        }

        for (int i = 0; i <= rowIndex; ++i) {
            vector<int> current(i + 1, 1);  
            for (int j = 1; j < i; ++j) {
                current[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(current);
        }

        return ans[rowIndex];
    }
};

int main() {
    Solution sol;

    // Specify the row index you want (for example, 3)
    int rowIndex = 3;

    // Get the desired row from Pascal's Triangle
    vector<int> result = sol.getRow(rowIndex);

    // Print the result
    cout << "Row " << rowIndex << " of Pascal's Triangle is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
