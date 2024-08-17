#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDistance = 0;

        for(int i = 0; i < colors.size() - 1; ++i) {
            for(int j = i + 1; j < colors.size(); j++) {
                if(colors[i] != colors[j]) {
                    int distance = j - i;
                    maxDistance = max(distance, maxDistance);
                }
            }
        }
        return maxDistance;
    }
};

int main() {
    Solution sol;
    vector<int> colors = {1, 1, 1, 6, 1, 1, 1}; // Example input
    int result = sol.maxDistance(colors);
    cout << "Max distance: " << result << endl;
    return 0;
}
