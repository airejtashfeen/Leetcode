#include <iostream>
#include <vector>
#include <numeric>  // for std::accumulate
#include <algorithm> // for std::max

using namespace std;

//CHECK CANDY.PNG FOR EXPLANATION
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        if (n == 0) return 0;

        vector<int> candies(n, 1);

        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        return accumulate(candies.begin(), candies.end(), 0);
    }
};

int main() {
    Solution sol;

    vector<int> ratings1 = {1, 0, 2};
    vector<int> ratings2 = {1, 3, 4, 5, 2};

    cout << "Minimum candies for ratings {1, 0, 2}: " << sol.candy(ratings1) << endl;
    cout << "Minimum candies for ratings {1, 3, 4, 5, 2}: " << sol.candy(ratings2) << endl;

    return 0;
}
