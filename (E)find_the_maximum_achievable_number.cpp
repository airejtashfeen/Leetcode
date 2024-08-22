#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};

int main() {
    int num = 3;
    int t = 5;
    int result = Solution().theMaximumAchievableX(num, t);
    cout << "The maximum achievable X is: " << result << endl;
    return 0;
}