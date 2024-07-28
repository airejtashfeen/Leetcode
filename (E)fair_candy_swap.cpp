#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        int diff = (sumA - sumB) / 2;

        unordered_set<int> bobsCandies(bobSizes.begin(), bobSizes.end());

        for (int candyA : aliceSizes) {
            int candyB = candyA - diff;

            if (bobsCandies.find(candyB) != bobsCandies.end()) {
                return {candyA, candyB};
            }
        }

        return {};
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> aliceSizes1 = {1, 2};
    vector<int> bobSizes1 = {2, 3};
    vector<int> result1 = sol.fairCandySwap(aliceSizes1, bobSizes1);
    cout << "Test case 1 result: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Test case 2
    vector<int> aliceSizes2 = {1, 2, 5};
    vector<int> bobSizes2 = {2, 4};
    vector<int> result2 = sol.fairCandySwap(aliceSizes2, bobSizes2);
    cout << "Test case 2 result: [" << result2[0] << ", " << result2[1] << "]" << endl;

    return 0;
}
