#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> candySet(candyType.begin(), candyType.end());
        int unique_count = candySet.size();
        int max_allowed = candyType.size() / 2;
        
        return min(unique_count, max_allowed);
    }
};

int main() {
    Solution solution;
    
    // Example usage:
    vector<int> candies1 = {1, 1, 1, 1, 2, 2, 2, 3, 3, 3};
    vector<int> candies2 = {1, 1, 2, 3};
    
    cout << "Maximum types of candies sister can receive (Example 1): " << solution.distributeCandies(candies1) << endl;
    cout << "Maximum types of candies sister can receive (Example 2): " << solution.distributeCandies(candies2) << endl;
    
    return 0;
}
