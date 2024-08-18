#include <iostream>

using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count = 0;

        for (int i = 2; i <= num; i++) {
            int sum = 0;
            int k = i;
            while (k > 0) {
                sum += k % 10;
                k /= 10;
            }
            if (sum % 2 == 0) count++;
        }

        return count;
    }
};

int main() {
    int num = 30; 
    Solution solution;
    int result = solution.countEven(num);
    cout << "Count of even numbers: " << result << endl;
    return 0;
}