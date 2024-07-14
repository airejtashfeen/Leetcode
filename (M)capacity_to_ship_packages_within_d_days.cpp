#include <iostream>
#include <vector>
#include <algorithm> // for max_element
#include <numeric> // for accumulate

class Solution {
    int calculateDays(std::vector<int>& weights, int capacity) {
        int days = 1;
        int load = 0;
        int n = weights.size();
        for (int i = 0; i < n; ++i) {
            if (weights[i] + load > capacity) {
                days += 1;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return days;
    }

public:
    int shipWithinDays(std::vector<int>& weights, int days) {
        int low = *std::max_element(weights.begin(), weights.end());
        int high = std::accumulate(weights.begin(), weights.end(), 0);
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (calculateDays(weights, mid) <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    Solution solution;

    std::vector<int> weights1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days1 = 5;
    std::cout << "Minimum capacity to ship within " << days1 << " days: " 
              << solution.shipWithinDays(weights1, days1) << std::endl;

    std::vector<int> weights2 = {3, 2, 2, 4, 1, 4};
    int days2 = 3;
    std::cout << "Minimum capacity to ship within " << days2 << " days: " 
              << solution.shipWithinDays(weights2, days2) << std::endl;

    std::vector<int> weights3 = {1, 2, 3, 1, 1};
    int days3 = 4;
    std::cout << "Minimum capacity to ship within " << days3 << " days: " 
              << solution.shipWithinDays(weights3, days3) << std::endl;

    return 0;
}
