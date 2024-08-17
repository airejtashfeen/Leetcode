#include <iostream>

using namespace std;

class Solution {
public:
    bool isThree(int n) {
        if(n == 1) return false;
        int count = 0;
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                count++;
            }
        }
        return count == 3;
    }
};

int main() {
    Solution sol;
    int n = 9;  // Example input
    if(sol.isThree(n)) {
        cout << n << " has exactly three divisors." << endl;
    } else {
        cout << n << " does not have exactly three divisors." << endl;
    }
    return 0;
}
