#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int missingNumbers = arr[mid] - (mid + 1);

            if (missingNumbers < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low + k;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    int result = sol.findKthPositive(arr, k);
    cout << "The " << k << "-th missing positive integer is: " << result << endl;

    return 0;
}
