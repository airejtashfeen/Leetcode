#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count = 0;
        int n = hours.size();
        
        for (int i = 0; i < n - 1; ++i) {
            for(int j = i + 1; j < n; ++j) {
                if ((hours[i] + hours[j]) % 24 == 0) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    
    // Example test case
    vector<int> hours = {8, 16, 12, 12, 8, 16};
    
    // Count complete day pairs
    int result = sol.countCompleteDayPairs(hours);
    
    // Output the result
    cout << "Number of complete day pairs: " << result << endl;
    
    return 0;
}
