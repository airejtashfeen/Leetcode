#include <iostream>

using namespace std;

class Solution {
public:
    int distributeCandies(int n, int limit) {
        int res = 0;
        
        for (int child1 = 0; child1 <= limit; child1++) {
            for (int child2 = 0; child2 <= limit; child2++) {
                int child3 = n - child1 - child2;
                if (child3 >= 0 && child3 <= limit) {
                    res++;
                }
            }
        }
        
        return res;
    }
};

int main() {
    int n = 10; // Example: 10 candies
    int limit = 3; // Example: Maximum 3 candies per child

    Solution solution;
    int result = solution.distributeCandies(n, limit);

    cout << "Number of ways to distribute candies: " << result << endl;

    return 0;
}