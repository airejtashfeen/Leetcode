#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();

        for (int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end());
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                image[i][j] = (image[i][j] == 0) ? 1 : 0;
            }
        }
        return image;
    }
};

int main() {
    Solution sol;
    
    // Define a sample image
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    cout << "Original Image:" << endl;
    for (const auto& row : image) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Flip and invert the image
    vector<vector<int>> result = sol.flipAndInvertImage(image);

    cout << "Transformed Image:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
