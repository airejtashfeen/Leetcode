#include <iostream>
#include <vector>
#include <algorithm> // For std::min_element and std::max_element
using namespace std;

class Solution {
private:
    bool possible(vector<int>& bloomDay, long long day, int m, int k) {
        int flowers = 0, bouquets = 0;
        for (int b : bloomDay) {
            if (b <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        if (m * (long long)k > n) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, (long long)mid, m, k)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> bloomDay = {1, 10, 3, 10, 2}; // Example test case
    int m = 3, k = 1;
    int result = solution.minDays(bloomDay, m, k);
    cout << "The minimum number of days to make " << m << " bouquets is: " << result << endl;
    return 0;
}
